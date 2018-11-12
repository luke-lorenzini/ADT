#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "queue.h"
#include "stack.h"

int main()
{
	int returnedVal;
	stack_node_t *stack0 = NULL;
	queue_node_t *head0 = NULL;
	queue_node_t *tail0 = NULL;

	for (int i = 0; i < 100000; i++)
	{
		stack_push(&stack0, i);
		printf("Pushing %d\n", i);
	}

	while (!stack_isEmpty(&stack0))
	{
		/*if (stack_peek(&stack0) == 13)
		{
			printf("Found 13\n");
		}*/
		printf("Popped %d\n", stack_pop(&stack0));
	}

	//queue_isEmpty(&head0);

	exit(EXIT_SUCCESS);
}