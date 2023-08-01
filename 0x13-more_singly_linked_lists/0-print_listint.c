#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list
 *
 *@h: head of linklist nodes
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (count);
}
