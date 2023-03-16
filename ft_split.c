/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 18:49:54 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:05:52 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	int		w_count;

	i = 0;
	w_count = 0;
	while (*s && *s == c)
		s++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			w_count++;
		i++;
	}
	if (w_count == 0 && !(*s))
		return (w_count);
	return (w_count + 1);
}

static char	**ft_free(char **res, size_t i)
{
	while (res[i] && i > 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
	return (NULL);
}

static char	*ft_strndup(char const *s, int word_size)
{
	char	*word;
	int		j;

	word = malloc(sizeof(char) * word_size + 1);
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < word_size)
	{
		word[j] = s[j];
		j++;
	}
	word[word_size] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_size;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		word_size = 0;
		while (s[word_size] != c && s[word_size])
			word_size++;
		if (word_size != 0)
			res[j++] = ft_strndup(s, word_size);
		if (word_size != 0 && res[j - 1] == NULL)
			return (ft_free(res, j - 1));
		s += word_size;
	}
	res[j] = NULL;
	return (res);
}
