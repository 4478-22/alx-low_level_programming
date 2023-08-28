#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *curr_ent = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	while (i < index - 1)
	{
		if (!cur || !(cur->next))
			return (-1);
		cur = cur->next;
		i++;
	}


	curr_ent = cur->next;
	cur->next = curr_ent->next;
	free(curr_ent);

	return (1);
}
