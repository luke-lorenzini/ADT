#include <stdbool.h>

typedef struct stack_node
{
	int data;
	struct stack_node *next;
} stack_node_t;

void stack_push(stack_node_t **, int);
int stack_pop(stack_node_t **);
int stack_peek(stack_node_t **);
bool stack_isEmpty(stack_node_t **);