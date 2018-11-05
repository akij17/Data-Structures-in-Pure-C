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
void displayList_arraylist(arrayList);
void insertEnd(arrayList*, int);
void insert_arraylist(arrayList*, int, int);
void insertTop(arrayList*, int);
void delete_arraylist(arrayList*, int);
#endif //DSAIMPLEMENTATION_ARRAYLIST_H
