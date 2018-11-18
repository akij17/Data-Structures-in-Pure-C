//
// Created by BANSI on 17-11-2018.
//

#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph2.h"


Graph2 graph2_create(int n) {
    Graph2 g=malloc(sizeof(Graph2));
    assert(g);
    g->v=n;
    g->e=0;
    g->matrix = (int*)malloc(n*n*sizeof(int));
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            *(g->matrix + i*n + j) = 0;
    return g;
}
void graph2_destroy(Graph2 g) {
    free(g->matrix);
    free(g);
}
void graph2_add_edge(Graph2 g, int source, int sink) {
    assert(source>=0); assert(sink>=0); assert(source<g->v); assert(sink<g->v);
    *(g->matrix + (g->v)*source + sink) = 1;
    g->e++;
}
int graph2_vertex_count(Graph2 g) {
    return g->v;
}
int graph2_edge_count(Graph2 g) {
    return g->e;
}
int graph2_out_degree(Graph2 g, int source) {
    assert(source>=0); assert(source<g->v);
    int counter=0;
    for (int i=0; i<g->v; i++)
        if (*(g->matrix + (g->v)*source + i) == 1) counter++;
    return counter;
}
int graph2_has_edge(Graph2 g, int source, int sink) {
    assert(source>=0); assert(source<g->v); assert(sink<g->v); assert(sink>=0);
    if (*(g->matrix + (g->v)*source + sink) == 1) return 1;
    return 0;
}

void main_graph2() {
    beginGraph1:
    printf("\n"
           "1. Generate graph\n"
           "2. Find out-degree of a node\n"
           "3. Find total nodes\n"
           "4. Find total edges\n"
           "99. Main Menu\n"
    );

    int x; scanf("%d", &x);
    switch (x){
        case 1:;
            Graph2 g = graph2_create(4);
            graph2_add_edge(g, 0, 1);
            graph2_add_edge(g, 0, 2);
            graph2_add_edge(g, 0, 3);
            graph2_add_edge(g, 1, 2);
            graph2_add_edge(g, 1, 3);
            graph2_add_edge(g, 2, 3);
            graph2_add_edge(g, 2, 0);
            graph2_add_edge(g, 3, 1);
            goto beginGraph1;
        case 2:;
            int x1;
            printf("Enter the key of node: ");
            scanf("%d", &x1);
            printf("out degree of 0 node : %d\n", graph2_out_degree(g, x1));
            goto beginGraph1;
        case 3:
            printf("Total Nodes : %d\n", graph2_vertex_count(g));
            goto beginGraph1;
        case 4:
            printf("Total edges : %d\n", graph2_edge_count(g));
            goto beginGraph1;
        default:
            return;
    }
}


//
//    printf("out degree of 0 node : %d\n", graph_out_degree(g, 2));
//    printf("Has Edge : %d\n", graph_has_edge(g, 0, 2));
//    printf("Total Nodes : %d\n", graph_vertex_count(g));
//    printf("Total edges : %d\n", graph_edge_count(g));
//}