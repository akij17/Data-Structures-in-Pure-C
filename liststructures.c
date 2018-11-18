//
// Created by Akshay on 10/27/2018.
//
#include <stdio.h>
#include <stdlib.h>

#include "liststructures.h"
#include "arraylist.h"
#include "linkedlist.h"
#include "helpers.h"
#include "sortnsearch.h"

static int listType = 0;

void listMenu(){
    //clearScreen();
    char *s0 = "Array List";
    char *s1 = "Linked List";
    arrayList *aList = newArrayList(10);
    linkedList *lList = newLinkedList();
    begin:
    printf("\nCurrent list structure: %s\n", listType==0?s0:s1);
    printf(
            "\n"
            "What will you like to perform?\n"
            "1) Add items to list\n"
            "2) Display items from list\n"
            "3) Delete items from list\n"
            "4) Sort the list\n"
            );
    printf("5) Switch to %s\n", listType==0?s1:s0);
    printf("Enter your selection: ");
    int x; scanf("%d", &x);
    switch(x){
        case 1:;
            int i1, p1;
            do {
                printf("\n"
                       "Enter an element to insert followed by position (USE 0 FOR TOP)\n"
                       "Enter -1 -1 to return to main menu\n"
                       "Insert: ");
                scanf("%d %d", &i1, &p1);
                if(p1 > -1){
                    if(listType==0) insert_arrayList(aList, i1, p1);
                    else if(listType==1) insert_linkedList(lList, i1, p1);
                }
               }while(i1 != -1 && p1 != -1);
            goto begin;
        case 2:
            if(listType==0) {
                if (isEmpty_arrayList(*aList) != 1) {
                    displayList_arrayList(*aList);
                    pressEnterKey();
                } else printf("The list is empty!");
            }
            else if(listType==1){
                if(isEmpty_linkedList(*lList) != 1){
                    displayList_linkedList(*lList);
                    pressEnterKey();
                }
            }
            goto begin;
        case 3:
            if(listType==0) {
                printf("\n"
                       "To delete by position enter P followed by position\n"
                       "To delete by item enter I followed by item\n"
                       "Delete: ");
                int i2;
                char p2;
                scanf("%c %d", &p2, &i2);
                if (p2 == 'P') {
                    delete_arrayList(aList, i2);
                } else if (p2 == 'I') {
                    int pos = linearSearch_arrayList(*aList, i2);
                    if (pos != 0)
                        delete_arrayList(aList, pos);
                    else printf("%d does not exist in the list", i2);
                }
            }else{
                printf("\n"
                       "Enter the position to delete: "
                );
                int i2; scanf("%d", &i2);
                delete_linkedList(lList, i2);
            }
            goto begin;
        case 4:
            printf("\n"
                      "For insertion sort enter I followed by 0 or 1\n"
                      "For merge sort enter M followed by 0 or 1\n"
                      "Sort: ");
            char p3; int i3;
            scanf("%c %d", &p3, &i3);
            if(p3 == 'I'){
                insertionSort_arrayList(aList, i3);
            }
            printf("Sorting successful");
            goto begin;
        case 5:
            switchList();
            printf("\nSwitched to %s",listType==0?s0:s1);
            goto begin;
        default:break;
    }
}

void switchList(){
    if(listType==0) listType = 1;
    else listType = 0;
}