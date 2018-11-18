//
// Created by Parth Soni on 11/15/2018.
//

#include "queue_ll.h"
#include "linkedlist.h"
#include <stdio.h>
#include <malloc.h>

queue_ll *new_queue_ll(){
    linkedList *ll = newLinkedList();
    queue_ll *q = malloc(sizeof(queue_ll)+ sizeof(ll));
    q->size = 0;
    q->data = ll;
    return q;
}

void enqueue_queue_ll(queue_ll *q, int item){
    insert_linkedList((q->data), item, 999);
    q->size++;
}

int dequeue_queue_ll(queue_ll *q){
    if(q->size>0){
        int item = q->data->head->next->data;
        q->data->head->next = q->data->head->next->next;
        q->size--;
        return item;
    }
    else
        return -1;
}

int front_queue_ll(queue_ll *q){
    if(q->size>0){
        int item = q->data->head->next->data;
        return item;
    }
    else
        return -1;
}


