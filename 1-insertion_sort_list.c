#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 *	integers in ascending order.
 * @list: pointer to a doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *cur = *list, *temp;

	while (cur != NULL)
	{
		if (cur->next != NULL)
		{
			if (cur->n > cur->next->n)
			{
				temp = cur->next;
				if (cur->prev != NULL)
					cur->prev->next = temp;
				else
					*list = temp;
				if (temp->next != NULL)
					temp->next->prev = cur;
				cur->next = temp->next;
				temp->next = cur;
				temp->prev = cur->prev;
				cur->prev = temp;
				cur = *list;
				print_list(*list);
				continue;
			}
		}
		cur = cur->next;
	}
}
