#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void printList(node *headNode)
{
	while (headNode != NULL)
	{
		printf("%d ", headNode->data);
		headNode = headNode->next;
	}
	return ;
}

int main(void)
{
	node *first = malloc(sizeof(node));
	node *second = malloc(sizeof(node));
	node *third = malloc(sizeof(node));

	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;

	printList(first);
	printf("\n");

	return (0);
}
