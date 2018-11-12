#include <stdlib.h>

#include "list.h"
#include "stack.h"

void stack_push(stack_node_t **localStack, int val)
{
	//stack_node_t *localNode = (stack_node_t*)malloc(sizeof(stack_node_t));
	//localNode->data = val;
	//localNode->next = *localStack;

	//*localStack = localNode;

	list_addLast(localStack, val);
}

int stack_pop(stack_node_t **localStack)
{
	//int returnVal = (*localStack)->data;
	//*localStack = (*localStack)->next;

	//return returnVal;

	return list_removeLast(localStack);
}

int stack_peek(stack_node_t **localStack)
{
	return (*localStack)->data;
}

bool stack_isEmpty(stack_node_t **localStack)
{
	//return *localStack == NULL;
	return list_isEmpty(localStack);
}