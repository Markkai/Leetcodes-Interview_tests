#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *buildLinklist(int [], int);
int find_firsthalf_Big(NODE*);
int find_lasthalf_Big(NODE*);
void printList(NODE*);
void freeList(NODE*);

int main(){

    int ar[6] = {34,54,23,76,12,89};
    int f_big, l_big;
    NODE *first;
    first = buildLinklist(ar, 6);
    printf("The Link-list: ");
    printList(first);

    f_big = find_firsthalf_Big(first);
    l_big = find_lasthalf_Big(first);

    printf("The first half Big node: %d\n", f_big);
    printf("The last half Big node: %d\n", l_big);

    freeList(first);
    system("pause");
    return 0;
}

NODE *buildLinklist(int ar[], int n){
    int i;
    NODE *curt, *prev, *first;
    for(i=0; i<n; i++){
        curt = (NODE* )malloc(sizeof(NODE));
        curt->data = ar[i];
        if(i==0)
            first = curt;
        else
            prev->next = curt;
        curt->next = NULL;
        prev = curt;
    }
    return first;
}

int find_firsthalf_Big(NODE* first){
    int size=0, big, mid;
    NODE *ptr = first;
    while(ptr){
        ptr = ptr->next;
        size++;
    }
    mid = size/2;
    ptr=first;
    big=ptr->data;
    for(int i=0; i<=mid; i++){
        if(ptr->data > big)
            big = ptr->data;
        ptr = ptr->next;
    }
    return big;
}

int find_lasthalf_Big(NODE* first){
    int cnt = 0, i, mid, big;
    NODE* ptr = first;
    while(ptr != NULL){
        cnt++;
        ptr = ptr->next;
    }
    mid = cnt/2;
    ptr = first;
    while(mid){
        ptr = ptr->next;
        mid--;
    }
    big = ptr->data;
    while(ptr!=NULL){
        if(ptr->data > big)
            big = ptr->data;
        ptr = ptr->next;
    }
    return big;
}

void printList(NODE* first){
    NODE *ptr = first;
    while(ptr!=NULL){
        printf("%3d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeList(NODE* first){
    NODE *ptr=first, *tmp ;
    while(ptr!=NULL){
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}






/* Answer
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *buildLinklist(int [], int);
int find_firsthalf_Big(NODE*);
int find_lasthalf_Big(NODE*);
void printList(NODE*);
void freeList(NODE*);

NODE *buildLinklist(int ar[], int n){
    int i;
    NODE *curt, *prev, *first;
    for(i=0; i<n; i++){
        curt = (NODE* )malloc(sizeof(NODE));
        curt->data = ar[i];
        if(i==0)
            first = curt;
        else
            prev->next = curt;
        curt->next = NULL;
        prev = curt;
    }
    return first;
}

int find_firsthalf_Big(NODE* first){
    int cnt = 0, i, mid, big;
    NODE* ptr = first;
    while(ptr!=NULL){
        cnt++;
        ptr = ptr->next;
    }
    mid = cnt/2;
    ptr = first;
    big = ptr->data;
    for(i=0; i<=mid; i++){
        if(ptr->data > big)
            big = ptr->data;
        ptr = ptr->next;
    }
    return big;
}

int find_lasthalf_Big(NODE* first){
    int cnt = 0, i, mid, big;
    NODE* ptr = first;
    while(ptr != NULL){
        cnt++;
        ptr = ptr->next;
    }
    mid = cnt/2;
    ptr = first;
    while(mid){
        ptr = ptr->next;
        mid--;
    }
    big = ptr->data;
    while(ptr!=NULL){
        if(ptr->data > big)
            big = ptr->data;
        ptr = ptr->next;
    }
    return big;
}

void printList(NODE* first){
    NODE *ptr = first;
    while(ptr!=NULL){
        printf("%3d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeList(NODE* first){
    NODE *ptr=first, *tmp ;
    while(ptr!=NULL){
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}


*/
