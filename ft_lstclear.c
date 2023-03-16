/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:06:25 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:01:52 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst && del)
	{
		while ((*lst))
		{
			tmp = (*lst)->next;
			(*del)((*lst)->content);
			free((*lst));
			(*lst) = tmp;
		}
		*lst = NULL;
	}
}
