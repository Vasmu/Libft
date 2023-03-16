/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:04:30 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:01:28 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*atmp;

	if (new && alst)
	{
		atmp = *alst;
		if (atmp == NULL)
			*alst = new;
		else
		{
			while (atmp->next)
				atmp = atmp->next;
			atmp->next = new;
		}
	}
}
