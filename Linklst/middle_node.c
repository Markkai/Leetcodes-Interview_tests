#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE *buildLinklist(int *, int);
NODE *findMidnode(NODE*);
void printList(NODE*);
void freeLink(NODE*);
NODE* bubbleSortList(NODE*);

int main(){

    int i,res;
    int arr[6] = {34,11,45,76,22,54};
    NODE *first, *mid, *sorted;
    first = buildLinklist(arr, 6);
    mid = findMidnode(first);
    printList(first);
    res = mid->data;
    printf("The middle node's data: %d\n", res);

    // after sort result:
    sorted = bubbleSortList(first);
    printList(sorted);
    mid = findMidnode(sorted);
    res = mid->data;
    printf("The middle node's data: %d\n", res);


    freeLink(first);
    system("pause"); return 0;
}
NODE* bubbleSortList(NODE* head) {
    NODE *pre, *cur, *tail, *tmp;
    int size=0;
    tail = head;
    while(tail){
        size++;
        tail = tail->next;
    }
    for(int i=size; i>0; i--){
        cur = head;
        pre = head;
        for(int j=0; j<i-1; j++){
            if(cur->data > cur->next->data){
                tmp = cur->next;
                cur->next = tmp->next;
                tmp->next = cur;
                if(cur == head){
                    head = tmp;
                    pre = tmp;
                }
                else{
                    pre->next = tmp;
                    pre = tmp;
                }
            }
            else{
                cur = cur->next;
                if(j!=0) pre = pre->next;
            }
        }
    }
    return head;
}


NODE *buildLinklist(int *ar, int n){

    NODE *prev,*curr,*first;
    int i;
    for(i=0; i<n; i++){
        curr = (NODE*) malloc(sizeof(NODE));
        curr->data = ar[i];
        if(i==0){
            first = curr;
        }
        else{
            prev->next = curr;
        }
        curr->next = NULL;
        prev = curr;
    }
    return first;
}


NODE *findMidnode(NODE *first){
    int size=0;
    NODE *ptr = first;
    while(ptr){
        size++;
        ptr = ptr->next;
    }
    size/=2;
    ptr = first;
    while(size){
        ptr = ptr->next;
        size--;
    }
    return ptr;
}

void printList(NODE* first){
    NODE *ptr = first;
    while(ptr){
        printf("%3d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void freeLink(NODE *first){
    NODE *ptr = first, *tmp;
    while(ptr){
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}


/* Answer
typedef struct node{
    int data;
    struct node* next;
}NODE;

NODE* buildLinklist(int [], int);
void printList(NODE*);
void freeList(NODE*);
NODE* findMidnode(NODE*);



NODE* buildLinklist(int ar[], int n){

    NODE *curt, *prev, *first;
    for(int i=0; i<n; i++){
        curt = (NODE*) malloc(sizeof(NODE));
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

void printList(NODE* first){

    NODE *ptr = first;
    while(ptr != NULL){
        printf("%3d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

NODE* findMidnode(NODE* first){

    NODE *ptr = first;
    int cnt = 0;
    while(ptr!=NULL){
        cnt ++;
        ptr = ptr->next;
    }
    cnt /= 2;
    ptr = first;
    while(cnt){
        printf(" %d", ptr->data);
        ptr = ptr->next;
        cnt--;
    }
    return ptr;
}
void freeList(NODE* first){
    NODE *ptr = first, *tmp;
    while(ptr != NULL){
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}



*/


/* leetcode version
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* ptr = head;
    int cnt = 0;
    while(ptr != NULL){
        cnt++;
        ptr = ptr->next;
    }
    cnt /= 2;
    while(cnt--){
        head = head->next;
    }
    return head;
};
*/

