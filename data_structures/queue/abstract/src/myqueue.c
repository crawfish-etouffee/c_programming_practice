#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "myqueue.h"

typedef struct myq {
    int *values;
    int head, tail, num_entries, size;
} queue;

queue * q_create(int max_size) {
    queue *q = malloc(sizeof(queue));
    q->size = max_size;
    q->values = malloc(sizeof(int) * q->size);
    q->num_entries = 0; // we're empty
    q->head = 0;
    q->tail = 0;
    return q;
}

void init_queue(queue *q, int max_size) {
    q->size = max_size;
    q->values = malloc(sizeof(int) * q->size);
    q->num_entries = 0;
    q->head = 0;
    q->tail = 0;
}

bool queue_empty(queue *q) {
    return (q->num_entries == 0);
}

bool queue_full(queue *q) {
    return (q->num_entries == q->size);
}

void queue_destroy(queue *q) {
    free(q->values);
    free(q);
}

bool q_enqueue(queue *q, int value) {

    if (queue_full(q)) {
        return false;
    }
    q->values[q->tail] = value;
    q->num_entries++;
    q->tail = (q->tail + 1) % q->size;

    return true;
}

int q_dequeue(queue  *q) {
    int result;

    if (queue_empty(q)) {
        return QUEUE_EMPTY;
    }

    result = q->values[q->head];
    q->head = (q->head + 1) % q->size;
    q->num_entries--;

    return result;
}
