/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evsuits <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:49:45 by evsuits           #+#    #+#             */
/*   Updated: 2022/01/05 15:04:50 by evsuits          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = (long) n;
	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb / 10 != 0)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = (nb % 10) + 48;
		write(fd, &c, 1);
	}
	else
	{
		c = (nb % 10) + 48;
		write(fd, &c, 1);
	}
	return ;
}
