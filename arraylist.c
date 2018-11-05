//
// Created by Akshay on 10/27/2018.
//

#include "arraylist.h"
#include <stdio.h>
#include <malloc.h>


arrayList *newArrayList(int n){
    arrayList *aList = malloc(sizeof(*aList) + sizeof(int)*n);
    aList->size = 0;
    aList->totalSize = n;
    aList->data = malloc(sizeof(int)*n);
    return aList;
}

void insert(arrayList *aList, int item, int position){
    if(aList->size < aList->totalSize && position>-1){
        int endPos = aList->size;
        for(int i = endPos; i>=position; i--){
            (aList->data)[i+1] = (aList->data)[i];
        }
        (aList->data)[position] = item;
        (aList->size)++;
    }
}

void insertEnd(arrayList *aList, int item){
    if(aList->size < aList->totalSize){
        (aList->data)[aList->size] = item;
        (aList->size)++;
        //*((aList->data)+aList->size) = item;
        //(aList->size)++;
    }
}

void insertTop(arrayList *aList, int item){
    insert(aList, item, 0);
}

void displayList(arrayList aList){
    printf("Contents of array list: ");
    for(int i = 0; i<aList.size; i++){
        printf("%d -> ", aList.data[i]);
    }
}

void delete(arrayList *aList, int pos){
    if(pos > aList->size){
        //Overflow condition
    }else if(pos==aList->size){
        (aList->size)--;
    }else{
        for(int i = pos; i<aList->size; i++){
            (aList->data)[pos] = (aList->data)[pos+1];
        }
    }
}