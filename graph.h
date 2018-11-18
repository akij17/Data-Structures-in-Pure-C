//
// Created by BANSI on 17-11-2018.
//

#ifndef DSAIMPLEMENTATION_GRAPH_H
#define DSAIMPLEMENTATION_GRAPH_H

#endif //DSAIMPLEMENTATION_GRAPH_H

/* for directed graph */
struct graph {
    int v, e;
    struct vertices {
        int s, succ_list[1];
    }* alist[1];
};
typedef struct graph* Graph;
Graph graph_create(int n);
void graph_destroy(Graph);
void graph_add_edge(Graph, int source, int sink);
int graph_vertex_count(Graph);
int graph_edge_count(Graph);
int graph_out_degree(Graph, int source);
int graph_has_edge(Graph, int source, int sink);
void main_graph1();