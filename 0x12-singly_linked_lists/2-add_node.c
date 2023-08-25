#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *vik;
	unsigned int len_t = 0;

	while (str[len_t])
		len_t++;

	new = malloc(sizeof(list_t));
	if (!vik)
		return (NULL);

	vik->str = strdup(str);
	vik->len_t = len_t;
	vik->next = (*head);
	(*head) = vik;

	return (*head);
}
