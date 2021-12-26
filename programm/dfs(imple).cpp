#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int vertex;
    struct node* next;
};

struct node* createNode(int v);

struct Graph
{
    int numVertices;
    int* visited;
    struct node** adjLists; // we need int** to store a two dimensional array. Similarly, we need struct node** to store an array of Linked lists
};

struct Graph* createGraph(int);
void addEdge(struct Graph*, int, int);
void printGraph(struct Graph*);
void DFS(struct Graph*, int);


int main()
{

    struct Graph* graph = createGraph(4);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    
    printGraph(graph);

    DFS(graph, 2);
    
    return 0;
}

void DFS(struct Graph* graph, int vertex) {
        struct node* ptr = graph->adjLists[vertex];
        
        graph->visited[vertex] = 1;
        printf("Visited %d \n", vertex);
    
        while(ptr!=NULL) {
            int adj_vertex = ptr->vertex;
        
            if(graph->visited[adj_vertex] == 0) {
                DFS(graph, adj_vertex);
            }
            ptr = ptr->next;
        }       
}

 
struct node* createNode(int v)
{
    struct node* new_node = malloc(sizeof(struct node));
    new_node->vertex = v;
    new_node->next = NULL;
    return new_node;
}

struct Graph* createGraph(int vertices)
{
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
 
    graph->adjLists = malloc(vertices * sizeof(struct node*));
    
    graph->visited = malloc(vertices * sizeof(int));
 
    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}
 
void addEdge(struct Graph* graph, int source, int destination)
{
    // Add edge from src to dest
    struct node* newNode = createNode(destination);
    newNode->next = graph->adjLists[source];
    graph->adjLists[source] = newNode;
 
    // Add edge from destination to source
    newNode = createNode(source);
    newNode->next = graph->adjLists[destination];
    graph->adjLists[destination] = newNode;
}
 
void printGraph(struct Graph* graph)
{
    int v;
    for (v = 0; v < graph->numVertices; v++)
    {
        struct node* ptr = graph->adjLists[v];
        printf("\n Adjacency list of vertex %d\n ", v);
        while (ptr)
        {
            printf("%d -> ", ptr->vertex);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
