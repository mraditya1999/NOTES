// Adjascency List representation
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

struct Graph
{
    int numVertices;
    struct node **adjLists;
};

struct Graph *createAGraph(int);
struct node *createNode(int);
void addEdge(struct Graph *graph, int, int);
void printGraph(struct Graph *graph);

void main()
{
    struct Graph *graph = createAGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);

    printGraph(graph);
}

struct node *createNode(int v)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

struct Graph *createAGraph(int vertices)
{
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node *));

    int i;
    for (i = 0; i < vertices; i++)
        graph->adjLists[i] = NULL;

    return graph;
}

void addEdge(struct Graph *graph, int source, int destination)
{

    // Add edge from source to destination
    struct node *newNode = createNode(destination);
    newNode->next = graph->adjLists[source];
    graph->adjLists[source] = newNode;

    // Add edge from destination to source
    newNode = createNode(source);
    newNode->next = graph->adjLists[destination];
    graph->adjLists[destination] = newNode;
}

void printGraph(struct Graph *graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node *temp = graph->adjLists[v];
        printf("\n Vertex %d\n: ", v);
        while (temp)
        {
            printf("%d -> ", temp->vertex);
            temp = temp->next;
        }
        printf("\n");
    }
}