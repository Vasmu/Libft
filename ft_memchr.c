/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:31:46 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:03:25 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	size_t			i;

	i = 0;
	s_cpy = (unsigned char *) s;
	while (i < n)
	{
		if (*s_cpy == (unsigned char) c)
			return (s_cpy);
		s_cpy++;
		i++;
	}
	return (NULL);
}
