//
// Created by WoLvErInE on 17-11-2018.
//

#ifndef DSAIMPLEMENTATION_BTREE_H
#define DSAIMPLEMENTATION_BTREE_H

#define COUNT 10

typedef struct tree
{
    struct tree *left;
    struct tree *right;
    int key;
}tree;
tree *root_tree, *temp_tree;

tree* create_tree_node(int);
void in_order_tree(tree*);
void pre_order_tree(tree*);
void post_order_tree(tree*);
void traversal_tree(tree*, int);
void print2DUtil(tree*, int);
void print_bt(tree*);
int height_tree(tree*);


#endif //DSAIMPLEMENTATION_BTREE_H
