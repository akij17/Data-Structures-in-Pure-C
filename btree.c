//
// Created by WoLvErInE on 17-11-2018.
//

#include "btree.h"
#include<stdlib.h>
#include<stdio.h>

btree* create_btree_node(int key)
{
    temp_btree = (btree *)malloc(sizeof(btree));
    temp_btree->key = key;
    temp_btree->left = temp_btree->right = NULL;
    return temp_btree;
}

void in_order_btree(btree *t)
{
    if(t==NULL)
        return;
    else
    {
        in_order_btree(t->left);
        printf("%d ",t->key);
        in_order_btree(t->right);
    }
}

void pre_order_btree(btree *t)
{
    if(t==NULL)
        return;
    else
    {
        printf("%d ",t->key);
        pre_order_btree(t->left);
        pre_order_btree(t->right);
    }
}

void post_order_btree(btree *t)
{
    if(t==NULL)
        return;
    else
    {
        post_order_btree(t->left);
        post_order_btree(t->right);
        printf("%d ",t->key);
    }
}

void traversal_btree(btree *t, int ch)
{
    switch(ch)
    {
        case 1:
            printf("\nPre Order Traversal :\n");
            pre_order_btree(t);
            break;
        case 2:
            printf("\nIn Order Traversal :\n");
            in_order_btree(t);
            break;
        case 3:
            printf("\nPost Order Traversal :\n");
            post_order_btree(t);
            break;
    }
}

void print2DUtil(btree *t, int space)
{
    // Base case
    if (t == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(t->right, space);

    // Print current node after space
    // count
    printf("\n");
    int i;
    for(i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", t->key);

    // Process left child
    print2DUtil(t->left, space);
}

void print_bt(btree *t)
{
    print2DUtil(t, 0);
}

int height_btree(btree *t)
{
    int left_height,right_height;
    if(t == NULL)
        return -1;
    else
    {
        left_height = height_btree(t->left);
        right_height = height_btree(t->right);
        return 1+(left_height > right_height ? left_height : right_height);
    }
}