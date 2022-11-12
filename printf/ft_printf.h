/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majmani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:00:28 by majmani           #+#    #+#             */
/*   Updated: 2022/10/31 20:07:34 by majmani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_adresse(size_t nb);
int	ft_putchar(char c);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putstr(char *str);
int	ft_hexadecimal(unsigned int nb, char *s);
int	ft_putnbr(int nb);
int	ft_printf(const char *str, ...);

#endif