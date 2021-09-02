#include <stdio.h>
#include <stdlib.h>

typedef struct Tree{
    int data;
    struct Tree *Lnode;
    struct Tree *Rnode;
}Tnode;

Tnode *searchnode(Tnode*, int);
Tnode *insernode(Tndoe*, int);

Tnode *searchnode(Tnode *Bnt, int key){

    if(Bnt==Null)
        return Null;
    else{
        if(key < Bnt->data){
            return searchnode(Bnt->Lnode, key);
        }
        else if(key > Bnt->R){
            return searchnode(Bnt->Rnode, key);
        }
        else{
            return Bnt;
        }
    }
}

Tnode *insernode(Tnode *Bnt, int key){

    if(Bnt){
        if(key < Bnt->data){
            Bnt->Lnode = insernode(Bnt->Lnode, key);
        }
        else if(key > Bnt->data){
            Bnt->Rnode = insernode(Bnt->Rnode, key);
        }
    }
    else{
        Bnt = (Tnode*) malloc(sizeof(Tnode));
        Bnt->data = key;
        Bnt->Lnode = Bnt->Rnode = NULL;
    }
    return Bnt;
}



/* Find tree node
T_node* search_node(T_node* Bnt, int key){

    if(Bnt){
        if(key < Bnt->data){
            return search_node(Bnt->Lnode, key);
        }
        else if(key > Bnt->data){
            return search_node(Bnt->Rnode, key);
        }
        else{
            return Bnt;
        }
    }
    else
        return NULL;
}

// Insert tree node
T_node* insert_node(T_node *Btree, int key){

    if(Btree){
        if(key < Btree->data){
            Btree->Lnode = insert_node(Btree->Lnode, key);
        }
        else{
            Btree->Rnode = insert_node(Btree->Rnode, key);
        }
    }
    else{
        Btree = (T_node*)malloc(sizeof(T_node));
        Btree->data = key;
        Btree->Lnode = NULL;
        Btree->Rnode = NULL;
    }
    return Btree;
}

*/
