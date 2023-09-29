#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len_t = 0;
	int pur;
	listint_t *cur;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		pur = *h - (*h)->next;
		if (pur > 0)
		{
			cur = (*h)->next;
			free(*h);
			*h = cur;
			len_t++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len_t++;
			break;
		}
	}

	*h = NULL;

	return (len_t);
}
