/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:41:17 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:03:31 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	s1_cp = (unsigned char *) s1;
	s2_cp = (unsigned char *) s2;
	while (n > 0)
	{
		if (*s1_cp != *s2_cp)
			return (*s1_cp - *s2_cp);
		s1_cp++;
		s2_cp++;
		n--;
	}
	return (0);
}
