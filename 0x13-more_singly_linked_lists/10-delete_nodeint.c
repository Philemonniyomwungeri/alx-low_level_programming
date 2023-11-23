#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t
 *                           linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: (1) if successful, (-1) if the node the given index does not exist.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL || head == NULL)
		return (-1);

	listint_t *prev = NULL;
	unsigned int i;

	for (listint_t *current = *head; current != NULL && i < index; prev = current)
			(current = current->next, i++);

	if (index == 0 && *head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}

