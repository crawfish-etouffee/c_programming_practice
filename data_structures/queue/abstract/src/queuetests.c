#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "myqueue.h"

int main() {
    queue *q1 = q_create(5); 
    q_enqueue(q1, 56);
    q_enqueue(q1, 78);
    q_enqueue(q1, 23);
    q_enqueue(q1, 988);
    q_enqueue(q1, 13);
    q_enqueue(q1, 2);

    int t; 
    while ((t = q_dequeue(q1)) != QUEUE_EMPTY) {
        printf("t = %d\n", t);
    }
    queue_destroy(q1);
}
