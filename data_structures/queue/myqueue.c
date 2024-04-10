#include "myqueue.h"

queue * q_create(int max_size) {
    queue *q = malloc(sizeof(queue));
    q->size = max_size;
    q->values = malloc(sizeof(int) * q->size);
    q->num_entries = 0; // we're empty
    q->head = 0;
    q->tail = 0;
    return q;
}

bool q_empty(queue *q) {
    return (q->num_entries == 0);
}

bool q_full(queue *q) {
    return (q->num_entries == q->size);
}

void q_destroy(queue *q) {
    free(q->values);
    free(q);
}

bool enqueue(queue *q, int value) {

    if (queue_full(q)) {
        return false;
    }
    q->values[q->tail] = value;
    q->num_entries++;
    q->tail = (q->tail + 1) % q->size;

    return true;
}

int dequeue(queue  *q) {
    int result;

    if (queue_empty(q)) {
        return QUEUE_EMPTY;
    }

    result = q->values[q->head];
    q->head = (q->head + 1) % q->size;
    q->num_entries--;

    return result;
}
