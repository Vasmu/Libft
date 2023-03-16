/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:18:02 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:03:43 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*dstcp;

	dstcp = (unsigned char *) dst;
	if (dst || src)
	{
		while (n-- > 0)
			*(unsigned char *) dstcp++ = *(unsigned char *) src++;
		return (dst);
	}
	return (NULL);
}
