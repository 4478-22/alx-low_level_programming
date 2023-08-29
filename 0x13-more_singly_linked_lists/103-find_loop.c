#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *small = head;
	listint_t *big = head;

	if (!head)
		return (NULL);

	while (small && big && big->next)
	{
		big = big->next->next;
		small = small->next;
		if (big == small)
		{
			small = head;
			while (small != big)
			{
				small = small->next;
				big = big->next;
			}
			return (big);
		}
	}

	return (NULL);
}
