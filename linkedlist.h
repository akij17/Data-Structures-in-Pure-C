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
    node *tail;
    node *head;
} linkedList;

linkedList *newLinkedList();
void insert_linkedList(linkedList*, int, int);
int isEmpty_linkedList(linkedList);
void displayList_linkedList(linkedList);
void delete_linkedList(linkedList*, int);

#endif //DSAIMPLEMENTATION_LINKEDLIST_H
