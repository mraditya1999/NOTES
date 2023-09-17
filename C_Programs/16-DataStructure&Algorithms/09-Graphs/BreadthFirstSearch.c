// Breadth First Search using Linked List
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int *queue;
    int front;
    int rear;
};

int isEmpty(struct queue *q)
{
    if (q->front == q->rear)
        return 1;
    return 0;
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
        return 1;
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isFull(q))
        printf("Queue is Full!!");
    else
        q->queue[++(q->rear)] = val;
}

int dequeue(struct queue *q)
{
    if (isEmpty(q))
        printf("Queue is Empty");
    return q->queue[++(q->front)];

}

void main()
{

    struct queue *q;
    q->size = 400;
    q->front = q->rear = 0;
    q->queue = (int *)malloc(q->size * sizeof(int));

    int node, vertex = 0;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int adjMatrix[7][7] =
        {
            {0, 1, 1, 1, 0, 0, 0},
            {1, 0, 1, 0, 0, 0, 0},
            {1, 1, 0, 1, 1, 0, 0},
            {1, 0, 1, 0, 1, 0, 0},
            {0, 0, 1, 1, 0, 1, 1},
            {0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 1, 0, 0}};

    printf("\n%d", vertex);
    visited[vertex] = 1;
    enqueue(q, vertex);

    while (!isEmpty(q))
    {
        node = dequeue(q);
        for (int j = 0; j < 7; j++)
        {
            if (adjMatrix[node][j] == 1 && visited[j] == 0)
            {
                printf("-> %d ", j);
                visited[j] = 1;
                enqueue(q, j);
            }
        }
    }
        printf("NULL");
}