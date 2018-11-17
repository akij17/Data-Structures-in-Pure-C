//
// Created by BANSI on 17-11-2018.
//

#ifndef DSAIMPLEMENTATION_GRAPH2_H
#define DSAIMPLEMENTATION_GRAPH2_H

#endif //DSAIMPLEMENTATION_GRAPH2_H

/* for directed graph */

typedef struct graph* Graph;
Graph graph_create(int n);
void graph_destroy(Graph);
void graph_add_edge(Graph, int source, int sink);
int graph_vertex_count(Graph);
int graph_edge_count(Graph);
int graph_out_degree(Graph, int source);
int graph_has_edge(Graph, int source, int sink);