/**
 * This is the implementation file for
 * the queue ADT.
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "queue.h"

struct queueNode {
    int data;
    struct queueNode *next;
};

struct queue {
    struct queueNode *head;
    struct queueNode *tail;
};

QNode create_node(int data, QNode next) {
    QNode new = malloc(sizeof(struct queueNode));
    assert(new != NULL);
    new->data = data;
    new->next = next;
    return new;
}

Queue new_queue(void) {
    Queue q = malloc(sizeof(struct queue));
    assert(q != NULL);
    q->head = NULL;
    q->tail = NULL;
    return q;
}

Queue enqueue(int data, Queue q) {
    assert(q != NULL);
    QNode node = create_node(data, NULL);
    if (q->head == NULL) {
        q->head = node;
        q->tail = node;
        return q;
    }
    q->tail->next = node;
    q->tail = q->tail->next;

    return q;
}

Queue dequeue(Queue q) {
    assert(q != NULL);
    if (q->head == NULL) {
        return q;
    }
    if (q->head == q->tail) {
        q->tail = q->tail->next;
    }
    QNode temp = q->head;
    q->head = q->head->next;
    free(temp);
    return q;
}

void print_queue(Queue q) {
    assert(q != NULL);
    printf("FRONT | ");
    QNode curr = q->head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X | BACK\n");
}