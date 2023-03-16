/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:52:37 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:09:20 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*new;

	str = (char *) s;
	new = NULL;
	while (*str)
	{
		if (*str == (const char) c)
			new = str;
		str++;
	}
	if (!c)
		return (str);
	return (new);
}
