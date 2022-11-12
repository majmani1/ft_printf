/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:49:31 by majmani           #+#    #+#             */
/*   Updated: 2022/10/31 19:49:32 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_int(unsigned int c)
{
	int		count;

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

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	val;
	int		l;

	l = ft_len_int(nb);
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
		val = (nb % 10) + '0';
		write (1, &val, 1);
	}
	return (l);
}
