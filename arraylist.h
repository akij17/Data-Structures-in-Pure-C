//
// Created by Akshay on 10/27/2018.
//

#ifndef DSAIMPLEMENTATION_ARRAYLIST_H
#define DSAIMPLEMENTATION_ARRAYLIST_H


typedef struct arrayList{
    int totalSize;
    int size;
    int *data;
} arrayList;

arrayList *newArrayList(int);
void displayList_arrayList(arrayList);
int isEmpty_arrayList(arrayList);
void insertEnd(arrayList*, int);
void insert_arrayList(arrayList*, int, int);
void insertTop(arrayList*, int);
void delete_arrayList(arrayList*, int);
#endif //DSAIMPLEMENTATION_ARRAYLIST_H
