/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:18:26 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:08:18 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_cp;
	unsigned char	*s2_cp;

	s1_cp = (unsigned char *) s1;
	s2_cp = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1_cp[i] && s2_cp[i] && n > i + 1)
	{
		if (s1_cp[i] != s2_cp[i])
			return (s1_cp[i] - s2_cp[i]);
		i++;
	}
	return (s1_cp[i] - s2_cp[i]);
}
