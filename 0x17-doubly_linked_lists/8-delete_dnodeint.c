#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return -1;

    current = *head;

    /* If the node to be deleted is the head */
    if (index == 0)
    {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    /* Traverse to the node at the specified index */
    for (i = 0; i < index && current != NULL; i++)
    {
        current = current->next;
    }

    /* If the index is out of bounds */
    if (current == NULL)
        return -1;

    /* Adjust the pointers to skip the node to be deleted */
    temp = current->prev;
    temp->next = current->next;
    if (current->next != NULL)
        current->next->prev = temp;

    /* Free the memory of the deleted node */
    free(current);

    return 1;
}
