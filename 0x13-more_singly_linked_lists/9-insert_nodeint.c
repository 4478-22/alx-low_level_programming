#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_nodes;
	listint_t *cur = *head;

	n_nodes = malloc(sizeof(listint_t));
	if (!n_nodes || !head)
		return (NULL);

	n_nodes->n = n;
	n_nodes->next = NULL;

	if (idx == 0)
	{
		n_nodes->next = *head;
		*head = n_nodes;
		return (n_nodes);
	}

	for (i = 0; cur && i < idx; i++)
	{
		if (i == idx - 1)
		{
			n_nodes->next = cur->next;
			cur->next = n_nodes;
			return (n_nodes);
		}
		else
			cur = cur->next;
	}

	return (NULL);
}
