#include <stdio.h>

#include "queue.h"

int main(void) {
    Queue q = new_queue();
    q = enqueue(1, q);
    q = enqueue(5, q);
    q = enqueue(6, q);
    print_queue(q);

    q = dequeue(q);
    print_queue(q);

    q = dequeue(q);
    print_queue(q);

    return 0;
}