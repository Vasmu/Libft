/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:04:09 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 14:58:00 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	nb;

	i = 0;
	nb = 0;
	signe = 1;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	else if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		i++;
		signe = (-1) * signe;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * signe);
}
