#include "lists.h"

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
	
	printf("%p\n", first);

	return (0);
}	
