/* Check linklist whether a cycle list  */
#include <stdio.h>
typedef struct node{
    int data;
    struct node *next;
}NODE;

int Check_cycle(NODE *head){

    NODE *fst, *slw;
    fst = head;
    slw = head;
    while(fst && fst->next){
        fst = fst->next->next;
        slw = slw->next;
        if(slw == fst){
            return 1;
        }
    }
    return 0;
}



/*
int Check_cycle(NODE *head){
   NODE *fst, *slw;
   fst = head;
   slw = head;
   while(fst && fst->next){
        fst = fst->next->next;
        slw = slw->next;
        if(slw == fst)
            return 1;
   }
    return 0;
}*/
