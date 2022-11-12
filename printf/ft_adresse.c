/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:57:23 by majmani           #+#    #+#             */
/*   Updated: 2022/10/31 19:59:41 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adresse(size_t nb)
{
	char	*val;
	int		y;
	int		count;

	val = "0123456789abcdef";
	count = 0;
	if (nb > 15)
	{
		count += ft_adresse(nb / 16);
		y = nb % 16;
		count += ft_putchar (val[y]);
	}
	else
		count += ft_putchar(val[nb % 16]);
	return (count);
}
