
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
Node *create_node(Graph *graph, char label);
void add_node(Graph *graph, Node *node);
void add_edge(Node *a, Node *b, double weight);
void delete_edge(Graph *graph, Node *a, Node *b);
void delete_node(Graph *graph, Node *node);
int getNodeIndex(Graph *graph, Node *node);
int sameNodes(Node *id1, Node *id2);
int Dijsktra(Graph *graph, Node *start, Node *end);
Graph * A(char *ans, int len );
void B(char ans [],Graph *graph);
void D(char ans [],Graph *graph);
void S(char ans [],Graph *graph);
void to_start(char *list, int len, Node *s);
int tsp(Graph *graph, char list [], int len);
void T(char ans [],Graph *graph);  
