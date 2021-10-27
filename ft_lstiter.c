#include "libft_bonus.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*element;

	element = lst;
	while (element)
	{
		f(element->content);
		element = element->next;
	}
}
