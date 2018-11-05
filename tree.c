//
// Created by Harsh on 05-11-2018.
//
#include<stdlib.h>
#include<stdio.h>
#include "tree.h"


tree *root_tree=null, *temp_tree=null;

tree* create_tree_node(int key)
{
    temp_tree = (tree *)malloc(sizeof(tree));
    temp_tree->key = key;
    temp_tree->left = temp_tree->right = null;
    return temp_tree;
}

tree* search_bst(tree *t, int key)
{
    if(t == null || t->key == key)
        return t;
    else if(key < t->key)
        return search_bst(t->left, key);
    else if(key > t->key)
        return search_bst(t->right, key);
}

tree* insert_bst(tree *t, int key)
{
    temp_tree = search_bst(t, key);
    if(temp_tree != null && temp_tree->key == key)
        return null;
    else if(t==null)
        return create_tree_node(key);
    else if(key < t->key)
        t->left = insert_bst(t->left, key);
    else if(key > t->key)
        t->right = insert_bst(t->right, key);
}

void in_order_tree(tree *t)
{
    if(t==null)
        return;
    else
    {
        in_order_tree(t->left);
        printf("%d ",t->key);
        in_order_tree(t->right);
    }
}

void pre_order_tree(tree *t)
{
    if(t==null)
        return;
    else
    {
        printf("%d ",t->key);
        pre_order_tree(t->left);
        pre_order_tree(t->right);
    }
}

void post_order_tree(tree *t)
{
    if(t==null)
        return;
    else
    {
        post_order_tree(t->left);
        post_order_tree(t->right);
        printf("%d ",t->key);
    }
}

tree* minimum_key_bst(tree *t)
{
    if(t == null || t->left == null)
        return t;
    else
        minimum_key_bst(t->left);
}

tree* maximum_key_bst(tree *t)
{
    if(t == null || t->right == null)
        return t;
    else
        maximum_key_bst(t->right);
}

int height_tree(tree *t)
{
    int left_height,right_height;
    if(t == null)
        return -1;
    else
    {
        left_height = height_tree(t->left);
        right_height = height_tree(t->right);
        return 1+(left_height > right_height ? left_height : right_height);
    }
}

void traversal_tree(tree *t, int ch)
{
    switch(ch)
    {
        case 1:
            printf("\nPre Order Traversal :\n");
            pre_order_tree(t);
            break;
        case 2:
            printf("\nIn Order Traversal :\n");
            in_order_tree(t);
            break;
        case 3:
            printf("\nPost Order Traversal :\n");
            post_order_tree(t);
            break;
    }
}

void tree_bst()
{
    int ch;
    root_tree = temp_tree = null;
    while(1)
    {
        printf(
                "1. Insert node \n"
                "2. Traversal \n"
                "3. Search \n"
                "4. Minimun key \n"
                "5. Maximum key \n"
                "6. Height \n"
                "7. Clear Console \n"
                "99. Main Menu \n"
                "Enter Choice : \n"
        );
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1:
                printf("Enter value to insert : ");
                scanf("%d",&ch);
                temp_tree = insert_bst(root_tree, ch);
                if(root_tree == null)
                    root_tree = temp_tree;
                if(temp_tree == null)
                    printf("\nInsertion failed :(");
                else
                    printf("\n%d Inserted Successfully :)", ch);
                break;

            case 2:
                printf(
                        "1. Pre Order Traversal \n"
                        "2. In Order Traversal \n"
                        "3. Post Order Traversal \n"
                        "Enter Choice : \n"
                );
                scanf("%d",&ch);
                traversal_tree(root_tree, ch);
                break;

            case 3:
                printf("Enter Key to search :\n");
                scanf("%d",&ch);
                temp_tree = search_bst(root_tree, ch);
                if(temp_tree == null)
                    printf("\n%d Doesn't Exist in Tree :(", ch);
                else
                    printf("\n%d Exists in Tree :)", ch);
                break;

            case 4:
                temp_tree = minimum_key_bst(root_tree);
                if(temp_tree == null)
                    printf("Tree is Empty :(");
                else
                    printf("%d is Smallest Key", temp_tree->key);
                break;

            case 5:
                temp_tree = maximum_key_bst(root_tree);
                if(temp_tree == null)
                    printf("Tree is Empty :(");
                else
                    printf("%d is Largest Key", temp_tree->key);
                break;

            case 6:
                printf("Tree's height is %d", height_tree(root_tree));
                break;

            case 7:
                system("cls");
                break;

            case 99:
                return;
        }
        printf("\n\n");
    }
}