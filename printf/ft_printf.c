/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:02:18 by majmani           #+#    #+#             */
/*   Updated: 2022/11/01 23:22:15 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_check(char str)
{
	char	*f;
	int		j;

	f = "csduxiXp";
	j = 0;
	while (j < 7)
	{
		if (str == f[j] || str == '%')
			return (1);
		j++;
	}
	return (0);
}

static int	ft_parametre(const char	*str, va_list para, int count, int i)
{
	if (str[i + 1] == 'c')
		count += ft_putchar(va_arg(para, int));
	if (str[i + 1] == 's')
		count += ft_putstr(va_arg(para, char *));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		count += ft_putnbr(va_arg(para, int));
	if (str[i + 1] == 'u')
		count += ft_putnbr_unsigned(va_arg(para, unsigned int));
	if (str[i + 1] == '%')
		count += ft_putchar('%');
	if (str[i + 1] == 'x')
		count += ft_hexadecimal(va_arg(para, unsigned int), "0123456789abcdef");
	if (str[i + 1] == 'X')
		count += ft_hexadecimal(va_arg(para, unsigned int), "0123456789ABCDEF");
	if (str [i + 1] == 'p')
		count += ft_putstr("0x") + ft_adresse(va_arg(para, size_t));
	else if (str[i + 1] != '%' && ft_check(str[i + 1]) == 0)
		count += ft_putchar(str[i + 1]);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	para;

	count = 0;
	i = 0;
	va_start(para, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count = ft_parametre(str, para, count, i);
			i++;
		}
		else if (str[i] != '%')
			count += ft_putchar(str[i]);
		i++;
	}
	va_end(para);
	return (count);
}
