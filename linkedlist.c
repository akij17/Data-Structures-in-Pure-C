//
// Created by Akshay on 10/28/2018.
//

#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"

linkedList *newLinkedList(){
    linkedList *llist = malloc(sizeof(linkedList));
    llist->size = 0;
    node *head = malloc(sizeof(node));
    llist->head = head;
    return llist;
}

void insert(linkedList *llist, int item){
    node *current = llist->head;
    if(llist->size == 0){
        node *newNode = malloc(sizeof(node));
        newNode->data = item;
        newNode->next = NULL;
        current->next = newNode;
        llist->size++;
    }
    else{
        while(current->next!=NULL){
            current = current->next;
        }
        node *newNode = malloc(sizeof(node));
        newNode->data = item;
        newNode->next = NULL;
        current->next = newNode;
        llist->size++;
    }
}

void displayList(linkedList llist){
    printf("Contents of array list: ");
    node *current = llist.head;
    while(current->next!=NULL){
        printf("%d -> ", current->data);
    }
}