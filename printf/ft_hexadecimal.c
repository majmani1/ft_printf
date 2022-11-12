/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowerputhexadecimal.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:10:06 by majmani           #+#    #+#             */
/*   Updated: 2022/11/01 14:10:27 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int nb, char *s)
{
	int		y;
	int		count;

	count = 0;
	if (nb > 15)
	{
		count += ft_hexadecimal(nb / 16, s);
		y = nb % 16;
		count += ft_putchar (s[y]);
	}
	else
		count += ft_putchar(s[nb % 16]);
	return (count);
}
