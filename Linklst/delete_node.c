/* delete a node */
#include <stdio.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

void delete_node(NODE *node){
    NODE *ptr = node->next;
    node->data = ptr->data;
    node->next = ptr->next;
    free(ptr);
}




/*

void delete_node(NODE *node){
    NODE *ptr = node->next;
    node->data = ptr->data;
    node->next = ptr->next;
    free(ptr);
}*/
