#ifndef MYQUEUE_H 
#define MYQUEUE_H

#include <stdbool.h>
#include <limits.h>

#define QUEUE_EMPTY INT_MIN


typedef struct myq queue;

queue *q_create(int max_size);
void queue_destroy(queue *q);
bool queue_empty(queue *q);
bool queue_full(queue *q);
void queue_destroy(queue *q);
bool q_enqueue(queue *q, int value);
int q_dequeue(queue *q);


#endif
