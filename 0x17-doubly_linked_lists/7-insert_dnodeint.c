#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i;

    if (h == NULL)
        return NULL;

    /* Create a new node and set its data */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;

    /* If the new node is to be inserted at the beginning */
    if (idx == 0)
    {
        new_node->prev = NULL;
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    /* Traverse the list to the position before the insertion point */
    temp = *h;
    for (i = 0; i < idx - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    /* If the index is out of bounds */
    if (temp == NULL)
    {
        free(new_node);
        return NULL;
    }

    /* Insert the new node */
    new_node->prev = temp;
    new_node->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = new_node;
    temp->next = new_node;

    return new_node;
}
