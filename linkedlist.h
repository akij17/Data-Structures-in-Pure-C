//
// Created by Akshay on 10/28/2018.
//

#ifndef DSAIMPLEMENTATION_LINKEDLIST_H
#define DSAIMPLEMENTATION_LINKEDLIST_H

typedef struct node{
    int data;
    struct node* next;
} node;

typedef struct linkedList{
    int size;
    node *head;
} linkedList;

linkedList *newLinkedList();
void insert_linkedlist(linkedList*, int);
void displayList_linkedlist(linkedList);

#endif //DSAIMPLEMENTATION_LINKEDLIST_H
