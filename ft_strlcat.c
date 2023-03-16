/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:56:25 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:07:58 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
	const char *restrict src, size_t dst_size)
{
	size_t	j;
	size_t	res;

	j = 0;
	if (dst_size <= 0)
		return (ft_strlen(src));
	res = ft_strlen(dst);
	if (ft_strlen(dst) > dst_size)
		return (dst_size + ft_strlen(src));
	while (res < dst_size - 1 && *(src + j))
	{
		dst[res] = *(src + j);
		j++;
		res++;
	}
	dst[res] = '\0';
	while (*(src + j))
	{
		res++;
		j++;
	}
	return (res);
}
