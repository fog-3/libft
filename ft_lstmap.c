/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernando <fernando@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 08:00:22 by fernando          #+#    #+#             */
/*   Updated: 2024/02/13 09:34:04 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		cnt;
	t_list	*res;
	t_list	*aux;

	if (!lst)
		return (0);
	cnt = ft_lstsize(lst);
	aux = 0;
	while (cnt > 0)
	{
		res = ft_lstnew(f(lst->content));
		if (!res)
		{
			ft_lstclear(&aux, del);
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&aux, res);
		lst = lst->next;
		cnt--;
	}
	return (aux);
}
