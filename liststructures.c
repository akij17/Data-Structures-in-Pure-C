//
// Created by Akshay on 10/27/2018.
//
#include <stdio.h>
#include <stdlib.h>

#include "liststructures.h"
#include "arraylist.h"
#include "linkedlist.h"
#include "helpers.h"

static int listType = 0;

void listMenu(){
    //clearScreen();
    char *s0 = "Array List";
    char *s1 = "Linked List";
    arrayList *aList = newArrayList(10);
    linkedList *lList = newLinkedList();
    begin:
    printf("Current list structure: %s\n", listType==0?s1:s0);
    printf(
            "\n\n\n"
            "What will you like to perform?\n"
            "1) Add items to list\n"
            "2) Display items from list\n"
            "3) Delete items from list\n"
            "4) Compare speeds of ArrayList and LinkedLists\n"
            );
    printf("5) Switch to %s\n", listType==0?s1:s0);
    printf("Enter your selection: ");
    int x; scanf("%d", &x);
    switch(x){
        case 1:;
            int i1, p1;
            do {
                printf("\n\n\n"
                       "Enter an element to insert followed by position (USE 0 FOR TOP)\n"
                       "Enter -1 -1 to return to main menu\n"
                       "Insert: ");
                scanf("%d %d", &i1, &p1);
                if(listType==0) insert(aList, i1, p1);
                //else if(listType == 1)  insert(lList,i1);
                //C DOES NOT HAS FUNCTION OVERLOADING
            }while(i1 != -1 && p1 != -1);
            goto begin;
        case 2:
            displayList(*aList);
            pressEnterKey();
            goto begin;
        case 3:
            printf("\n\n\n"
                   "To delete by position enter P followed by position\n"
                   "To delete by item enter I followed by item\n"
                   "Delete: ");
            int i2, p2;
            scanf("%d %d", &p2, &i2);
            if(p2 == 'P'){
                delete(aList, i2);
            }
            if(p2 == 'I'){
                //deleteItem(aList, i2);
            }
            goto begin;
        case 4:
            break;
        case 5:
            switchList();
            printf("\nSwitched to %s",listType==0?s1:s0);
            goto begin;
        default:break;
    }
}

void switchList(){
    if(listType==0) listType = 1;
    else listType = 0;
}
