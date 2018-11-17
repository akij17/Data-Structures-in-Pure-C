//
// Created by WoLvErInE on 17-11-2018.
//

#include "avl_bst.h"
#include<stdlib.h>

btree* re_balance_bst(btree *t)
{
    int left_btree, right_btree, side;
    left_btree=height_btree(t->left);
    right_btree=height_btree(t->right);
    side = left_btree > right_btree ? -1 : 1 ;
    temp_btree = left_btree > right_btree ? t->left : t->right;
    if(abs(left_btree-right_btree)>1)
    {
        if(side == -1) // left sided
        {
            if(temp_btree->left != NULL) // left left
            {
                t->left = temp_btree->right;
                temp_btree->right = t;
                return temp_btree;
            }
            else // left  right
            {
                t->left = t->right = NULL;
                temp_btree->right->right = t;
                temp_btree->right->left = temp_btree;
                t = temp_btree->right;
                temp_btree->left = temp_btree->right = NULL;
                return t;
            }
        }
        else // right sided
        {
            if(temp_btree->right != NULL) // right right
            {
                t->right = temp_btree->left;
                temp_btree->left = t;
                return temp_btree;
            }
            else // right left
            {
                t->left = t->right = NULL;
                temp_btree->left->left = t;
                temp_btree->left->right = temp_btree;
                t = temp_btree->left;
                temp_btree->left = temp_btree->right = NULL;
                return t;
            }
        }
    }
    else
        return t;
}

btree* insert_bst(btree *t, int key)
{
    temp_btree = search_bst(t, key);
    if(temp_btree != NULL && temp_btree->key == key)
        return NULL;
    else if(t==NULL)
        return create_btree_node(key);
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

btree* array_insert_bst(int Ns[], int n)
{
    int i;
    for(i=0; i<n; i++)
        temp_btree = insert_bst(temp_btree, Ns[i]);
    return temp_btree;
}