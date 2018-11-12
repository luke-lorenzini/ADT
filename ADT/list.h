#include <stdbool.h>

typedef struct list_node
{
	int data;
	struct list_node *next;
	struct list_node *prev;
} list_node_t;

void list_addFirst();
void list_addLast(list_node_t **, int);
int list_removeFirst();
int list_removeLast(list_node_t **);
bool list_isEmpty(list_node_t **);