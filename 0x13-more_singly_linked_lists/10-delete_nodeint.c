#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: pointer to the first node in the list
 * @index: index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (!temp)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}

