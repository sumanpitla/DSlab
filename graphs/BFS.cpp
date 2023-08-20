#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100
#define TRUE 1
#define FALSE 0

typedef struct {
    int front;
    int rear;
    int data[MAX_VERTICES];
} Queue;

int visited[MAX_VERTICES] = { FALSE };
int graph[MAX_VERTICES][MAX_VERTICES];
int num_vertices, num_edges;

void enqueue(Queue* q, int value) {
    if (q->rear == MAX_VERTICES - 1) {
        printf("Queue overflow\n");
        exit(1);
    }
    q->data[++q->rear] = value;
}

int dequeue(Queue* q) {
    if (q->front > q->rear) {
        printf("Queue underflow\n");
        exit(1);
    }
    return q->data[q->front++];
}

void bfs(int start_vertex) {
    Queue q;
    q.front = 0;
    q.rear = -1;
    enqueue(&q, start_vertex);
    visited[start_vertex] = TRUE;
    while (q.front <= q.rear) {
        int current_vertex = dequeue(&q);
        printf("%d ", current_vertex);
        for (int i = 0; i < num_vertices; i++) {
            if (graph[current_vertex][i] == 1 && !visited[i]) {
                visited[i] = TRUE;
                enqueue(&q, i);
            }
        }
    }
}

int main() {
    printf("Enter the number of vertices and edges: ");
    scanf("%d %d", &num_vertices, &num_edges);
    for (int i = 0; i < num_edges; i++) {
        int start_vertex, end_vertex;
        printf("Enter the start and end vertices of edge %d: ", i + 1);
        scanf("%d %d", &start_vertex, &end_vertex);
        graph[start_vertex][end_vertex] = 1;
        graph[end_vertex][start_vertex] = 1; // For undirected graph
    }
    int start_vertex;
    printf("Enter the start vertex for BFS: ");
    scanf("%d", &start_vertex);
    printf("BFS traversal: ");
    bfs(start_vertex);
    return 0;
}

