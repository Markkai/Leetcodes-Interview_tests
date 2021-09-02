/* reverse linklist  NODE* head is the given linklist head*/
#include <stdio.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;


void reverse_list(NODE *head){
    NODE *prev = NULL;
    NODE *curr = head;
    while(curr){
        NODE *nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}



/*
void reverse_list(NODE *head){

    NODE *curt = head;
    NODE *prev = NULL;
    while(curt!=NULL){
        NODE *nxt = curt->next;
        curt->next = prev;
        prev = curt;
        curt = nxt;
    }
    return prev;
}
*/
