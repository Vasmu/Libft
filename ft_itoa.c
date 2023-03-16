/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:31:57 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:01:03 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	nb;
	size_t	len;
	char	*res;

	len = len_int(n);
	nb = (size_t) n;
	if (n == -2147483648)
		nb = 2147483648;
	if (n < 0 && n > -2147483648)
		nb = n * -1;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	while (nb > 9)
	{
		res[--len] = nb % 10 + 48;
		nb = nb / 10;
	}
	res[len - 1] = nb + 48;
	return (res);
}
