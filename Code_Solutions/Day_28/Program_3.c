/*Question 3:
In addition to Question 1, display BFS traversal sequence of the undirected graph.
*/

#include <stdio.h>

#define MAX_VERTICES 100
#define MAX_QUEUE_SIZE 100

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int degree[MAX_VERTICES];

// Queue structure for BFS traversal
typedef struct {
    int items[MAX_QUEUE_SIZE];
    int front, rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1;
}

// Function to enqueue an item into the queue
void enqueue(Queue *q, int item) {
    if (q->rear == MAX_QUEUE_SIZE - 1) {
        printf("Queue is full\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = item;
    }
}

// Function to dequeue an item from the queue
int dequeue(Queue *q) {
    int item;
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            q->front = q->rear = -1;
        }
    }
    return item;
}

// Function to add an edge to the graph
void addEdge(int vertex1, int vertex2) {
    adjacencyMatrix[vertex1][vertex2] = 1;
    adjacencyMatrix[vertex2][vertex1] = 1;
    degree[vertex1]++;
    degree[vertex2]++;
}

// Function to perform BFS traversal
void BFS(int startVertex, int vertices) {
    Queue q;
    initializeQueue(&q);

    printf("BFS Traversal Sequence:\n");

    visited[startVertex] = 1;
    printf("%d ", startVertex);
    enqueue(&q, startVertex);

    while (!isEmpty(&q)) {
        int currentVertex = dequeue(&q);

        for (int i = 0; i < vertices; i++) {
            if (adjacencyMatrix[currentVertex][i] && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                enqueue(&q, i);
            }
        }
    }

    printf("\n");
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

    // Perform BFS traversal and display the sequence
    BFS(0, vertices);

    return 0;
}
