//
// Created by WoLvErInE on 17-11-2018.
//

#include "bst.h"
#include<stdlib.h>

tree* search_bst(tree *t, int key)
{
    if(t == NULL || t->key == key)
        return t;
    else if(key < t->key)
        return search_bst(t->left, key);
    else if(key > t->key)
        return search_bst(t->right, key);
}

tree* minimum_key_bst(tree *t)
{
    if(t == NULL || t->left == NULL)
        return t;
    else
        minimum_key_bst(t->left);
}

tree* maximum_key_bst(tree *t)
{
    if(t == NULL || t->right == NULL)
        return t;
    else
        maximum_key_bst(t->right);
}