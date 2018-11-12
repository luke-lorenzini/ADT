#include <stdlib.h>

#include "list.h"

void list_addFirst()
{

}

void list_addLast(list_node_t **localStack, int val)
{
	list_node_t *localNode = (list_node_t*)malloc(sizeof(list_node_t));
	localNode->data = val;
	localNode->next = *localStack;

	*localStack = localNode;
}

int list_removeFirst()
{

}

int list_removeLast(list_node_t **localStack)
{
	int returnVal = (*localStack)->data;
	*localStack = (*localStack)->next;

	return returnVal;
}

bool list_isEmpty(list_node_t **localList)
{
	return *localList == NULL;
}