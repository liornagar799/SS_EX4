
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct node_ {
    char id;
    int number_Of_neighbors;
    struct node_ **neighbors; /* list of pointers of adjacent nodes */
    double *weights;
} Node;

typedef struct graph_ {
    int number_Of_nodes;
    struct node_ **nodes; /* list of pointers of nodes */
} Graph;


char* cut(char str[], int t, int i);
Graph *init_graph();
void free_graph(struct graph_ *graph);

