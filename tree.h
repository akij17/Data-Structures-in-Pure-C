//
// Created by Harsh on 05-11-2018.
//


#ifndef DSAIMPLEMENTATION_TREE_H
#define DSAIMPLEMENTATION_TREE_H

#ifndef null
#define null (void *)0
#endif

typedef struct tree
{
    struct tree *left;
    struct tree *right;
    int key;
}tree;

tree* create_tree_node(int key);
tree* search_bst(tree *t, int key);
tree* insert_bst(tree *t, int key);
void in_order_tree(tree *t);
void pre_order_tree(tree *t);
void post_order_tree(tree *t);
tree* minimum_key_bst(tree *t);
tree* maximum_key_bst(tree *t);
int height_tree(tree *t);
void traversal_tree(tree *t, int ch);
void tree_bst();


#endif //DSAIMPLEMENTATION_TREE_H
