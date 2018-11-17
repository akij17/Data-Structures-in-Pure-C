//
// Created by WoLvErInE on 17-11-2018.
//

#ifndef DSAIMPLEMENTATION_BTREE_H
#define DSAIMPLEMENTATION_BTREE_H

#define COUNT 10

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    int key;
}btree;
btree *root_btree, *temp_btree;

btree* create_btree_node(int);
void in_order_btree(btree*);
void pre_order_btree(btree*);
void post_order_btree(btree*);
void traversal_btree(btree*, int);
void print2DUtil(btree*, int);
void print_bt(btree*);
int height_btree(btree*);


#endif //DSAIMPLEMENTATION_BTREE_H
