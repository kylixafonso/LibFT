#include <stdlib.h>
#include "libft_bonus.h"

static void	*ft_lstclearspecial(t_list **new_lst, void (*del)(void *))
{
	ft_lstclear(new_lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_element;
	t_list	*new_lst_element;
	t_list	*new_lst;

	new_lst = NULL;
	if (lst && f && del)
	{
		lst_element = lst;
		while (lst_element)
		{
			new_lst_element = ft_lstnew(f(lst->content));
			if (!new_lst_element)
				return (ft_lstclearspecial(&new_lst, del));
			new_lst_element->content = f(lst_element->content);
			new_lst_element->next = NULL;
			if (lst_element == lst)
				new_lst = new_lst_element;
			else
				ft_lstadd_back(&new_lst, new_lst_element);
			new_lst_element = new_lst_element->next;
			lst_element = lst_element->next;
		}
	}
	return (new_lst);
}
