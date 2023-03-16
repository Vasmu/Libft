/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:42:34 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:06:07 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*s1_cp;

	i = 0;
	len = ft_strlen(s1);
	s1_cp = malloc(len * sizeof(char) + 1);
	if (!s1_cp)
		return (NULL);
	s1_cp[len] = '\0';
	while (s1[i])
	{
		s1_cp[i] = s1[i];
		i++;
	}
	return (s1_cp);
}
