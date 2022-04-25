#include "lists.h"

void addXtoList(node *headNode, int x)
{
	while (headNode != NULL)
	{
		headNode->data = headNode->data + x;
		headNode = headNode->next;
	}
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

	printf("First List: \n");
	printList(first);
	printf("\n");
	addXtoList(first, 5);
	printf("New list: \n");
	printList(first);
	printf("\n");

	return (0);

}
