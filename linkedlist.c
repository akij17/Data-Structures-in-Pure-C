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
    head->data = -7;
    head->next = NULL;
    llist->head = head;
    return llist;
}

int isEmpty_linkedList(linkedList llist){
    if(llist.size == 0) return 1;
    else return 0;
}

void insert_linkedList(linkedList *llist, int item, int position) {
    node *current = llist->head;
    if (llist->size == 0) {
        node *newNode = malloc(sizeof(node));
        newNode->data = item;
        newNode->next = NULL;
        current->next = newNode;
        llist->size++;
    } else {
        int count = 0;
        if (position < llist->size) {
            while (count < position) {
                current = current->next;
                count++;
            }
            node *newNode = malloc(sizeof(node));
            newNode->data = item;
            newNode->next = current->next;
            current->next = newNode;
            llist->size++;
        }
    }
}
    /*
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
     */

void displayList_linkedList(linkedList lList){
    printf("Contents of linked list: ");
    node *current = lList.head;
    current = current->next;
    while(current->next!=NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
}