//
// Created by Akshay on 11/14/2018.
//

#include "stackQueue.h"
#include "stack_al.h"
#include "main.h"
#include <stdio.h>
#include "queue_ll.h"

void stackOptions();
void queueOptions();

int sqtype = 0;
char *sq1 = "Stack";
char *sq2 = "Queue";

void stackQueue(){
    printf("\nWhich data structure would you like to work on ?\n"
           "1. Stack\n"
           "2. Queue\n"
           "99. Return to main menu\n"
           "Enter your option: ");
    int x; scanf("%d", &x);
    switch (x){
        case 1:
            stackOptions();
            break;
        case 2:
            queueOptions();
            break;
        case 99:
            main();
            break;
        default:
            printf("Invalid entry. Going to main menu");
            main();
            break;
    }
}

void stackOptions(){
    stack_al *stack = newStack_al(10);
    beginStack:
    printf("\n"
            "Enter your choice from options below\n"
            "1. Push items in stack\n"
            "2. Pop items from stack\n"
            "3. Seek the top item in the stack\n"
            "4. Back to main menu\n"
            "Enter your choice: "
            );

    int c1; scanf("%d", &c1);
    switch(c1){
        case 1:
            printf("\nEnter the element to push: ");
            int x; scanf("%d", &x);
            push_stack_al(stack, x);
            goto beginStack;
        case 2:
            printf("\nPopped item from stack: ");
            int item =  pop_stack_al(stack);
            if(item == -1){
                printf("\nStack underflow!\n");
            }else {
                printf("%d\n",item);

            } goto beginStack;
        case 3:
            printf("\nPopped item from stack: ");
            int itm =  seek_stack_al(stack);
            if(itm == -1){
                printf("\nStack underflow!\n");
            }else {
                printf("%d\n",itm);

            }
            goto beginStack;
        case 4:
            stackQueue();
            break;
        default:
            printf("invalid entry");
            goto beginStack;
    }
}

void queueOptions(){
    queue_ll *queue = new_queue_ll();
    beginQueue:
    printf("\n"
           "Enter your choice from options below\n"
           "1. Enqueue items in queue\n"
           "2. Dequeue items from queue\n"
           "3. Front of the queue\n"
           "4. Back to main menu\n"
           "Enter your choice: "
    );

    int c1; scanf("%d", &c1);
    switch(c1){
        case 1:
            printf("Enter element to enqueue: ");
            int x; scanf("%d", &x);
            enqueue_queue_ll(queue, x);
            goto beginQueue;
        case 2:
            printf("Dequeue item: ");
            int item = dequeue_queue_ll(queue);
            if(item == -1){
                printf("Queue is empty\n");
            }else
                printf("%d\n", item);
            goto beginQueue;
        case 3:
            printf("Front item: ");
            int itm = front_queue_ll(queue);
            if(itm == -1){
                printf("Queue is empty\n");
            }else
                printf("%d\n", itm);
            goto beginQueue;
        case 4:
            stackQueue();
            break;
        default:
            printf("invalid entry");
            goto beginQueue;
    }

}
