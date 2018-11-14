//
// Created by Akshay on 11/14/2018.
//

#include "stackQueue.h"
#include "stack_al.h"
#include "main.h"
#include <stdio.h>

void stackOptions();
void queueOptions();

int sqtype = 0;
char *sq1 = "Stack";
char *sq2 = "Queue";

void stackQueue(){
    printf("Which data structure would you like to work on ?\n"
           "1. Stack\n"
           "2. Queue\n"
           "Enter your option: ");
    int x; scanf("%d", &x);
    switch (x){
        case 1:
            stackOptions();
            break;
        case 2:
            queueOptions();
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

}
