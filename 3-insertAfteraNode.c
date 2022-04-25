#include "lists.h"

void insertNode(node *prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		printf("Previous node cannot be null!");
		return ;
	}

	node *new_node = malloc(sizeof(node));
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
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
	insertNode(second , 10);
	printList(first);
	printf("\n");

	return (0);
}
