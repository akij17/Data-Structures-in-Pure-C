//
// Created by BANSI on 17-11-2018.
//

#ifndef DSAIMPLEMENTATION_GRAPH2_H
#define DSAIMPLEMENTATION_GRAPH2_H

#endif //DSAIMPLEMENTATION_GRAPH2_H

/* for directed graph */

struct graph2 {
    int v, e;
    int* matrix;
};
typedef struct graph2* Graph2;
Graph2 graph2_create(int n);
void graph2_destroy(Graph2);
void graph2_add_edge(Graph2, int source, int sink);
int graph2_vertex_count(Graph2);
int graph2_edge_count(Graph2);
int graph2_out_degree(Graph2, int source);
int graph2_has_edge(Graph2, int source, int sink);
void main_graph2();