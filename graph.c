//
// Created by BANSI on 17-11-2018.
//

#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "graph.h"


Graph graph_create(int n) {
    Graph g; int i;
    g = malloc(sizeof(struct graph) + sizeof(struct vertices *) * (n-1));
    assert(g);
    g->v = n; g->e = 0;
    for(i = 0; i < n; i++) {
        g->alist[i] = malloc(sizeof(struct vertices));   assert(g->alist[i]);
        g->alist[i]->s = 0;
    }
    return g;
}
void graph_destroy(Graph g) {
    for(int i = 0; i < g->v; i++) free(g->alist[i]);
    free(g);
}
void graph_add_edge(Graph g, int u, int v) {
    assert(u >= 0); assert(v >= 0); assert(u < g->v); assert(v < g->v);
    g->alist[u]->succ_list[g->alist[u]->s++] = v;
    g->e++;
}
int graph_vertex_count(Graph g) {
    return g->v;
}
int graph_edge_count(Graph g) {
    return g->e;
}
int graph_out_degree(Graph g, int u) {
    assert(u >= 0); assert(u < g->v);
    return g->alist[u]->s;
}
int graph_has_edge(Graph g, int u, int v) {
    for(int i = 0; i < g->alist[u]->s; i++)
        if(g->alist[u]->succ_list[i] == v) return 1;
    return 0;
}

void main_graph1() {
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
            Graph g = graph_create(4);
            graph_add_edge(g, 0, 1);
            graph_add_edge(g, 0, 2);
            graph_add_edge(g, 0, 3);
            graph_add_edge(g, 1, 2);
            graph_add_edge(g, 1, 3);
            graph_add_edge(g, 2, 3);
            graph_add_edge(g, 2, 0);
            graph_add_edge(g, 3, 1);
            goto beginGraph1;
        case 2:
            printf("out degree of 0 node : %d\n", graph_out_degree(g, 0));
            goto beginGraph1;
        case 3:
            printf("Total Nodes : %d\n", graph_vertex_count(g));
            goto beginGraph1;
        case 4:
            printf("Total edges : %d\n", graph_edge_count(g));
            goto beginGraph1;
        default:
            return;
    }

}