//
// Created by WoLvErInE on 17-11-2018.
//

#include "avl_bst.h"
#include<stdlib.h>

tree* re_balance_bst(tree *t)
{
    int left_tree, right_tree, side;
    left_tree=height_tree(t->left);
    right_tree=height_tree(t->right);
    side = left_tree > right_tree ? -1 : 1 ;
    temp_tree = left_tree > right_tree ? t->left : t->right;
    if(abs(left_tree-right_tree)>1)
    {
        if(side == -1) // left sided
        {
            if(temp_tree->left != NULL) // left left
            {
                t->left = temp_tree->right;
                temp_tree->right = t;
                return temp_tree;
            }
            else // left  right
            {
                t->left = t->right = NULL;
                temp_tree->right->right = t;
                temp_tree->right->left = temp_tree;
                t = temp_tree->right;
                temp_tree->left = temp_tree->right = NULL;
                return t;
            }
        }
        else // right sided
        {
            if(temp_tree->right != NULL) // right right
            {
                t->right = temp_tree->left;
                temp_tree->left = t;
                return temp_tree;
            }
            else // right left
            {
                t->left = t->right = NULL;
                temp_tree->left->left = t;
                temp_tree->left->right = temp_tree;
                t = temp_tree->left;
                temp_tree->left = temp_tree->right = NULL;
                return t;
            }
        }
    }
    else
        return t;
}

tree* insert_bst(tree *t, int key)
{
    temp_tree = search_bst(t, key);
    if(temp_tree != NULL && temp_tree->key == key)
        return NULL;
    else if(t==NULL)
        return create_tree_node(key);
    else if(key < t->key)
    {
        t->left = insert_bst(t->left, key);
        return re_balance_bst(t);
    }
    else if(key > t->key)
    {
        t->right = insert_bst(t->right, key);
        return re_balance_bst(t);
    }
}

tree* array_insert_bst(tree* t, int Ns[], int n)
{
    int i;
    for(i=0; i<n; i++)
        temp_tree = insert_bst(temp_tree, Ns[i]);
    return temp_tree;
}