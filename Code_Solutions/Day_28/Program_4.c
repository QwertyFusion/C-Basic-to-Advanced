/*Question 4:
WAP to create a directed graph using Adjacency Matrix Method and display the degree of each vertex.
*/

#include <stdio.h>
#define MAX_VERTICES 100

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int outDegree[MAX_VERTICES];
int inDegree[MAX_VERTICES];

// Function to add a directed edge to the graph
void addDirectedEdge(int fromVertex, int toVertex) {
    adjacencyMatrix[fromVertex][toVertex] = 1;
    outDegree[fromVertex]++;
    inDegree[toVertex]++;
}

// Function to display the adjacency matrix and degree of each vertex
void displayDirectedGraph(int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\nOut-Degree of each vertex:\n");
    for (int i = 0; i < vertices; i++) {
        printf("Vertex %d: %d\n", i, outDegree[i]);
    }

    printf("\nIn-Degree of each vertex:\n");
    for (int i = 0; i < vertices; i++) {
        printf("Vertex %d: %d\n", i, inDegree[i]);
    }
}

int main() {
    int vertices, edges, fromVertex, toVertex;

    // Input the number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Initialize adjacency matrix, out-degree array, and in-degree array
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
        outDegree[i] = 0;
        inDegree[i] = 0;
    }

    // Input the number of edges
    printf("Enter the number of directed edges: ");
    scanf("%d", &edges);

    // Input the directed edges
    for (int i = 0; i < edges; i++) {
        printf("Enter directed edge (fromVertex toVertex): ");
        scanf("%d %d", &fromVertex, &toVertex);
        addDirectedEdge(fromVertex, toVertex);
    }

    // Display the directed graph
    displayDirectedGraph(vertices);

    return 0;
}
