/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:47:32 by majmani           #+#    #+#             */
/*   Updated: 2022/10/31 19:47:36 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_int(int n)
{
	int		count;
	long	c;

	c = n;
	count = 0;
	if (c < 0)
	{
		c = c * -1;
		count++;
	}
	else if (c == 0)
		count++;
	while (c > 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr(int nb)
{
	char	val;
	int		l;

	l = ft_len_int(nb);
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < 10)
		{
			val = nb + '0';
			write (1, &val, 1);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar ((nb % 10) + '0');
		}
	}
	return (l);
}
