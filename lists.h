#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


/**
 * struct Node - struct for a node
 * @data: The data for the node
 * @next: Pointer to the next node
 *
 * Description: model of a linked list node
 *
 */
typedef struct Node
{
	int data;
	struct Node *next;
} node;

void printList(node *);
void insertNode(node *prevNode, int new_data);
void insertHeadNode(node **head_ref, int new_data);
void insertTailNode(node **head_ref, int new_data);
void deleteNode(node **head_ref, int key);
#endif
