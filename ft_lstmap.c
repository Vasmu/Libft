/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:12:33 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:02:46 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_f;
	t_list	*resultat;

	resultat = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		lst_f = ft_lstnew((*f)(lst->content));
		if (lst_f == NULL)
			ft_lstclear(&resultat, (*del));
		ft_lstadd_back(&resultat, lst_f);
		lst = lst->next;
	}
	return (resultat);
}
