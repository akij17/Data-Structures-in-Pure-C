//
// Created by Akshay on 11/14/2018.
//

#ifndef DSAIMPLEMENTATION_STACK_AL_H
#define DSAIMPLEMENTATION_STACK_AL_H

#include "arraylist.h"

typedef struct stack_al{
    int size;
    int currentSize;
    arrayList data;
}stack_al;

stack_al *newStack_al(int);
void push_stack_al(struct stack_al*, int);
int pop_stack_al(struct stack_al*);
int seek_stack_al(struct stack_al*);

#endif //DSAIMPLEMENTATION_STACK_AL_H
