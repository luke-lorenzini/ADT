#include <stdbool.h>

typedef struct queue_node
{
	int data;
	struct queue_node *next;
} queue_node_t;

void queue_enqueue(queue_node_t **, int);
int queue_dequeue(queue_node_t **);
bool queue_isEmpty(queue_node_t **);