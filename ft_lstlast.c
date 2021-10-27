#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last && last->next)
	{
		last = last->next;
	}
	return (last);
}
