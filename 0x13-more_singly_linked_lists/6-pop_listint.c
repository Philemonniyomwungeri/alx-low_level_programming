#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The head node's data (n). If the linked list is empty, return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;         /* Save the current head node */
	data = temp->n;       /* Get the data from the head node */
	*head = (*head)->next;/* Move to the next node */
	free(temp);           /* Free the previous head node */

	return (data);
}

