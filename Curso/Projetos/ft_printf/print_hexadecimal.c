/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:55:58 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/12/13 16:56:29 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	print_p(char *format, va_list arg)
{
	unsigned long long	i;
	int					len;

	(void) format;
	i = va_arg (arg, unsigned long long);
	if (i == 0)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	len = ft_putnbr_base_fd(i, "0123456789abcdef", 1);
	return (len + 2);
}

int	print_x(char *format, va_list arg)
{
	unsigned int	i;
	int				len;

	i = va_arg (arg, unsigned int);
	if (*format == 'x')
		len = ft_putnbr_base_fd(i, "0123456789abcdef", 1);
	else
		len = ft_putnbr_base_fd(i, "0123456789ABCDEF", 1);
	return (len);
}

int	print_hexadecimal(char *format, va_list arg)
{
	int	i;

	i = 0;
	if (*format == 'x' || *format == 'X')
		i = print_x(format, arg);
	else
		i = print_p(format, arg);
	return (i);
}
