#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe-prints a listint_t linked lists
 * @head:node
 * Return:number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;	
	const listint_t *ptr[1024];
	int i = 0, j;

	if (head == NULL) 
	{
		exit(98);
	}
	while (head != NULL)
	{
		ptr[i] = (const listint_t *)&head;
		i++;
		for (j = 0; j < i; j++)
		{
			if(ptr[j] == ptr[i - 1])
			{
				exit(98);
			}
		}
		printf("%d\n", head->n);
		head = head->next;
		num++;
	}
	return (num);
}
