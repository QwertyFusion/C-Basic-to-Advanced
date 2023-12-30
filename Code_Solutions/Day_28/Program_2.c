/*Question 2:
In addition to Question 1, display DFS traversal sequence of the undirected graph.
*/

#include <stdio.h>
#define MAX_VERTICES 100

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int degree[MAX_VERTICES];

// Function to add an edge to the graph
void addEdge(int vertex1, int vertex2) {
    adjacencyMatrix[vertex1][vertex2] = 1;
    adjacencyMatrix[vertex2][vertex1] = 1;
    degree[vertex1]++;
    degree[vertex2]++;
}

// Function to perform DFS traversal
void DFS(int vertex, int vertices) {
    printf("%d ", vertex);
    visited[vertex] = 1;

    for (int i = 0; i < vertices; i++) {
        if (adjacencyMatrix[vertex][i] && !visited[i]) {
            DFS(i, vertices);
        }
    }
}

// Function to display the DFS traversal sequence
void displayDFS(int vertices) {
    printf("\nDFS Traversal Sequence:\n");
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            DFS(i, vertices);
        }
    }
}

// Function to display the adjacency matrix and degree of each vertex
void displayGraph(int vertices) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDegree of each vertex:\n");
    for (int i = 0; i < vertices; i++) {
        printf("Vertex %d: %d\n", i, degree[i]);
    }
}

int main() {
    int vertices, edges, vertex1, vertex2;

    // Input the number of vertices and edges
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Initialize adjacency matrix, degree array, and visited array
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
        degree[i] = 0;
        visited[i] = 0;
    }

    // Input the number of edges
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    // Input the edges
    for (int i = 0; i < edges; i++) {
        printf("Enter edge (vertex1 vertex2): ");
        scanf("%d %d", &vertex1, &vertex2);
        addEdge(vertex1, vertex2);
    }

    // Display the graph
    displayGraph(vertices);

    // Perform DFS traversal and display the sequence
    displayDFS(vertices);

    return 0;
}
