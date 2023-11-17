#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	/* Add more nodes as needed */
	print_list(head);
	return (0);
}

