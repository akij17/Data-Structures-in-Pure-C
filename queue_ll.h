//
// Created by Parth Soni on 11/15/2018.
//

#ifndef DSAIMPLEMENTATION_QUEUE_LL_H
#define DSAIMPLEMENTATION_QUEUE_LL_H

#include "linkedlist.h"

typedef struct queue_ll{
    linkedList *data;
    int size;
}queue_ll;

queue_ll *new_queue_ll();
void enqueue_queue_ll(queue_ll* , int );
int dequeue_queue_ll(queue_ll*);
int front_queue_ll(queue_ll*);

#endif //DSAIMPLEMENTATION_QUEUE_LL_H
