#include <stdio.h>
#include <stdlib.h>

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


/* selection sort move data version*/
NODE* bubblesort_list(NODE *head){

    NODE *i, *j;
    for(i=head; i->next!=NULL; i=i->next){
        for(j=i->next; j->next!=NULL; j=j->next){
            if(j->data < i->data){
                int tmp = j->data;
                j->data = i->data;
                i->data = tmp;
            }
        }
    }
    return head;
}



/*
NODE* bubbleSortList(NODE* head) {
    // bubble sort
    NODE* tail = head;
    NODE* tmp = head;
    NODE* curr = head;
    NODE* prev = head;

    // get Linked list size first
    int size = 0;
    while(tail) {
        tail = tail->next;
        size++;
    }

    for(int i=size;i>0;i--) {
        curr = head;
        prev = head;
        if(curr->next){
            for(int j=0; j<i-1 ;j++){
                // Compares two elements, and swaps if current is bigger than next
                if(curr->data > curr->next->data) {
                    tmp = curr->next;
                    curr->next = tmp->next;
                    tmp->next = curr;
                    // In linked list, swap has two case. In head or not.
                    if(curr == head) {
                        head = tmp;
                        prev = tmp;
                    } else {
                        prev->next = tmp;
                        prev = prev->next;
                    }
                } else {
                    curr = curr->next;
                    if(j!=0) prev = prev->next;
                }
            }
        }
        else
            break;
    }
    return head;
}




// selection sort data move version
void bubblesort_list(NODE *head){
    NODE *i, *j;
    for(i=head; i!=NULL; i=i->next){
        for(j=i->next; j!=NULL; j=j->next){
            if(i->data > j->data){
                int tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
}

// Bubble sort move data version
NODE* bubblesort_list(NODE *head){
    NODE *i, *j;
    for(i=head; i->next!=NULL; i=i->next){
        for(j=head; j->next!=NULL; j=j->next){
            if(j->data > j->next->data){
                int tmp = j->data;
                j->data = j->next->data;
                j->next->data = tmp;
            }
        }
    }
    return head;
}

*/
