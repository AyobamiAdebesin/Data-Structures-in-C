#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node *next;
} node;

void deleteNode(node **headNode, int key)
{
	node *temp = *headNode, *prev;

	if (temp != NULL && temp->data == key)
	{
		*headNode = temp->next;
		free(temp);
		return ;
	}

	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return ;
	}

	prev->next = temp->next;
	free(temp);
}



