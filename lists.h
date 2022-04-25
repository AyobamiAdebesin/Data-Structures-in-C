#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * Node - struct for a node
 * @data: The data for the node
 * @next: Pointer to the next node\
 */

typedef struct Node
{
	int data;
	struct Node *next;
} node;




#endif
