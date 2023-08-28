#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_nodes;
	listint_t *curr_ent = *head;

	new = malloc(sizeof(listint_t));
	if (!n_nodes)
		return (NULL);

	n_nodes->n = n;
	n_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = n_nodes;
		return (n_nodes);
	}

	while (curr_ent->next)
		curr_ent = curr_ent->next;

	curr_ent->next = n_nodes;

	return (n_nodes);
}
