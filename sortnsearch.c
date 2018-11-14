//
// Created by Akshay on 10/29/2018.
//

#include "sortnsearch.h"
#include "arraylist.h"


//Type = 0 for ascending sort Type = 1 for descending sort
void insertionSort_arrayList(arrayList *aList, int type){
    int size = aList->size;
    int current = 1;
    while(current < size){
        for(int i = 0; i<current; i++){
            if((aList->data)[i]>(aList->data)[current] && type == 0){
                int temp = (aList->data)[current];
                (aList->data)[current] = (aList->data)[i];
                (aList->data)[i] = temp;
            }
            else if((aList->data)[i]<(aList->data)[current] && type == 1){
                int temp = (aList->data)[current];
                (aList->data)[current] = (aList->data)[i];
                (aList->data)[i] = temp;
            }
        }
        current++;
    }
}

int linearSearch_arrayList(arrayList aList, int item){
    for(int i = 0; i<aList.size; i++){
        if((aList.data)[i] == item){
            return i;
        }
    }
    return 0;
}