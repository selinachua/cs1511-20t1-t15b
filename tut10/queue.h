/**
 * This is the header file for the
 * queue ADT.
 */

typedef struct queueNode *QNode;
typedef struct queue *Queue;

/**
 * Create a new queue and returns a pointer
 * to it.
 */
Queue new_queue(void);

/**
 * Adds data into the queue pointed to be q.
 */
Queue enqueue(int data, Queue q);

/**
 * Removing an element from the queue pointed to
 * by q.
 */
Queue dequeue(Queue q);

/**
 * Prints the queue.
 */
void print_queue(Queue q);

