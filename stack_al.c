//
// Created by Akshay on 11/14/2018.
//

#include "stack_al.h"
#include "arraylist.h"
#include <stdio.h>
#include <stdlib.h>

stack_al *newStack_al(int n){
    arrayList *data = newArrayList(n);
    stack_al *stack = malloc(sizeof(stack_al) + sizeof(*data));
    stack->size = n;
    stack->data = *data;
    stack->currentSize = 0;
    return stack;
}

void push_stack_al(stack_al *stack, int item){
    if(stack->currentSize < stack->size) {
        insert_arrayList(&(stack->data), item, stack->currentSize);
        stack->currentSize++;
    }
    else{
        printf("Stack Overflow!");
    }
}

int pop_stack_al(stack_al *stack) {
    if ((stack->currentSize) > 0) {
    int item = (stack->data).data[(stack->data).size - 1];
    (stack->currentSize)--;
    (stack->data).size--;
    return item;
    }
    else
        return -1;
}

int seek_stack_al(stack_al *stack){
    if((stack->currentSize) < 0)    return -1;
    else return (stack->data).data[(stack->data).size - 1];
}

