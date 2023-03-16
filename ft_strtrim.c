/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 16:46:19 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:09:46 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_count(char const *str, size_t len, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i] && is_in_set(str[i], set) != 0)
	{
		if (is_in_set(str[i], set) == 1)
			count++;
		i++;
	}
	while (len > i && is_in_set(str[--len], set) != 0)
	{
		if (is_in_set(str[len], set) == 1 && len > i)
			count++;
	}
	return (count);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	count = ft_count(str, len, set);
	new = malloc(sizeof(char) * (ft_strlen(str) - count + 1));
	if (new == NULL)
		return (NULL);
	while (str[i] && is_in_set(str[i], set) == 1)
		i++;
	while ((len > i || len > 0) && str[len - 1]
		&& is_in_set(str[len - 1], set) == 1)
		len--;
	while (str[i] && i < len)
		new[j++] = str[i++];
	new[j] = '\0';
	return (new);
}
