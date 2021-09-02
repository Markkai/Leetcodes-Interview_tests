/* Insert a new node after prev node */

#include <stdio.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

NODE* insert_node(NODE *prev, int val){
    NODE *new_n;
    new_n = (NODE* ) malloc(sizeof(NODE))
    new_n->data = val;
    new_n->next = prev->next;
    prev->next = new_n;

    return prev;
}



/*
NODE* insert_node(NODE *prev, int val){
    NODE *new_node;
    new_node = (NODE* ) malloc(sizeof(NODE));
    if(prev == NULL){
        printf("prev node can't be a NULL");
        return;
    }
    new_node->data = val;
    new_node->next = prev->next;
    prev->next = new_node;

    return prev;

}*/
