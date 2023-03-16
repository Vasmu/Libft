/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:09:42 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:03:51 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (!src && !dst)
		return (NULL);
	i = -1;
	if (!(src + len > dst && src < dst))
		while (++i < len)
			*((unsigned char *)dst + i) = *((char *)src + i);
	else
		while (len-- > 0)
			*((unsigned char *)dst + len) = *((char *)src + len);
	return (dst);
}
