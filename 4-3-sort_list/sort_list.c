#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *head;
	int 	temp;
	int		i;

	head = lst;
	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	while (i--)
	{
		head = lst;
		while (head && head->next)
		{
			if (cmp(head->data, head->next->data) == 0)
			{
				temp = head->data;
				head->data = head->next->data;
				head->next->data = temp;
			}
			head = head->next;
		}
	}
	return (lst);
}
