#include "lists.h"

void insertHeadNode(node **head_ref, int new_data)
{
	node *new_node = malloc(sizeof(node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void printList(node *headNode)
{
	while (headNode != NULL)
	{
		printf("%d ", headNode->data);
		headNode = headNode->next;
	}
}

int main(void)
{
	node *first;
	node *second;
	node *third;

	first = (node *)malloc(sizeof(node));
	second = (node *)malloc(sizeof(node));
	third = (node *)malloc(sizeof(node));

	first->data = 1;
	first->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	insertHeadNode(&first, 5);
	printList(first);
	printf("\n");

	return (0);
}	
