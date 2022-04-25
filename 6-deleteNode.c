#include "lists.h"

void deleteNode(node **head_ref, int key)
{
	node *temp = *head_ref, *prev;

	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next;
		free(temp);
		return ;
	}

	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return ;

	prev->next = temp->next;
	free(temp);
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

	deleteNode(&first, 2);
	printList(first);
	printf("\n");

	return (0);
}

