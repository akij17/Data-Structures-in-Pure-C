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
    head->data = -777;
    head->next = NULL;
    llist->head = head;
    llist->tail = malloc(sizeof(node));
    llist->tail->next = NULL;
    llist->tail->data = -888;
    return llist;
}

int isEmpty_linkedList(linkedList llist){
    if(llist.size == 0) return 1;
    else return 0;
}

void insert_linkedList(linkedList *llist, int item, int position) {
    if(position >= llist->size) position = 999;
    if (llist->size == 0) {
        node *newNode = malloc(sizeof(node));
        newNode->data = item;
        newNode->next = NULL;
        llist->head->next = newNode;
        llist->tail->next = newNode;
        llist->size++;
    } else {
        //printf("Come here");
        if (position == 0){
            //printf("position0here");
            node *temp = llist->head->next;
            node *newNode = malloc(sizeof(node));
            newNode->data = item;
            newNode->next = temp;
            llist->head->next = newNode;
            llist->size++;
        }else if(position == 999) {
            printf("-2HERE");
            //printf("positionENDhere");
            node *newNode = malloc(sizeof(node));
            newNode->data = item;
            newNode->next = NULL;
            llist->tail->next->next = newNode;
            llist->tail->next = newNode;
            llist->size++;
        }
        else {
            node *current = llist->head;
            //printf("positionRANDOMhere");
            int count = position;
            while(count>0){
                current = current->next;
                count--;
            }
            node *newNode = malloc(sizeof(node));
            newNode->data = item;
            newNode->next = current->next;
            current->next = newNode;
            llist->tail->next = newNode;
            llist->size++;
        }
    }
}


void displayList_linkedList(linkedList lList){
    printf("Linked List Size: %d\n", lList.size);
    printf("Contents of linked list: ");
    node *current = lList.head;
    current = current->next;
    while(current!=NULL){
        printf("%d -> ", current->data);
        current = current->next;
    }
}

void delete_linkedList(linkedList *ll, int pos){
    if(pos < ll->size) {
        int count = pos;
        node *current = ll->head;
        while (count > 0) {
            current = current->next;
            count--;
        }
        current->next = current->next->next;
        ll->size--;
    }
    else printf("Invalid position entered");
}