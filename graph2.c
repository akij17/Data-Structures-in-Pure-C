//
// Created by BANSI on 17-11-2018.
//

#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph2.h"

struct graph {
    int v, e;
    int* matrix;
};

Graph graph_create(int n) {
    Graph g=malloc(sizeof(struct graph));
    assert(g);
    g->v=n;
    g->e=0;
    g->matrix = (int*)malloc(n*n*sizeof(int));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            *(g->matrix + i*n + j) = 0;
    return g;
}
void graph_destroy(Graph g) {
    free(g->matrix);
    free(g);
}
void graph_add_edge(Graph g, int source, int sink) {
    assert(source>=0); assert(sink>=0); assert(source<g->v); assert(sink<g->v);
    *(g->matrix + (g->v)*source + sink) = 1;
    g->e++;
}
int graph_vertex_count(Graph g) {
    return g->v;
}
int graph_edge_count(Graph g) {
    return g->e;
}
int graph_out_degree(Graph g, int source) {
    assert(source>=0); assert(source<g->v);
    int counter=0;
    for (int i=0; i<g->v; i++)
        if (*(g->matrix + (g->v)*source + i) == 1) counter++;
    return counter;
}
int graph_has_edge(Graph g, int source, int sink) {
    assert(source>=0); assert(source<g->v); assert(sink<g->v); assert(sink>=0);
    if (*(g->matrix + (g->v)*source + sink) == 1) return 1;
    return 0;
}
//
//void main() {
//    Graph g = graph_create(4);
//    graph_add_edge(g, 0, 1);
//    graph_add_edge(g, 0, 2);
//    graph_add_edge(g, 0, 3);
//    graph_add_edge(g, 1, 2);
//    graph_add_edge(g, 1, 3);
//    graph_add_edge(g, 2, 3);
//    graph_add_edge(g, 2, 0);
//    graph_add_edge(g, 3, 1);
//
//
//    printf("out degree of 0 node : %d\n", graph_out_degree(g, 2));
//    printf("Has Edge : %d\n", graph_has_edge(g, 0, 2));
//    printf("Total Nodes : %d\n", graph_vertex_count(g));
//    printf("Total edges : %d\n", graph_edge_count(g));
//}