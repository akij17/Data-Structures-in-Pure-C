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
void displayList(arrayList);
void insertEnd(arrayList*, int);
void insert(arrayList*, int, int);
void insertTop(arrayList*, int);
void delete(arrayList*, int);
#endif //DSAIMPLEMENTATION_ARRAYLIST_H
