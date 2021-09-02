
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}Node;

Node *builddoublink(int *, int );
void printlinklist(Node*);
void printinverlink(Node*);
void freelist(Node*);

int main(){

    int arr[6] = {34,11,45,76,22,54};
    Node *first, *last;
    first = builddoublink(arr, 6);
    printlinklist(first);
    last=first;
    while(last->next!=NULL){
        last = last->next;
    }
    printinverlink(last);
    freelist(first);

}
Node *builddoublink(int *ar, int n){
    Node *pre, *cur, *fir;
    for(int i=0; i<n; i++){
        cur = (Node*) malloc(sizeof(Node));
        cur->data = ar[i];
        if(i==0){
            fir = cur;
        }
        else{
            pre->next = cur;
            cur->prev = pre;
        }
        cur->next = NULL;
        pre = cur;
    }
    return fir;
}
void printlinklist(Node* node){
    while(node){
        printf("%3d", node->data);
        node = node->next;
    }
    printf("\n");
}

void printinverlink(Node* node){
    while(node){
        printf("%3d", node->data);
        node = node->prev;
    }
    printf("\n");
}

void freelist(Node *node){
    Node *ptr = node;
    Node *tmp;
    while(ptr){
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}


