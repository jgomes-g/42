/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_character.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:36:42 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/12/13 16:36:55 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	print_c(char *format, va_list arg)
{
	char	c;

	(void) format;
	c = va_arg (arg, int);
	ft_putchar_fd(c, 1);
	return (0);
}

int	print_s(char *format, va_list arg)
{
	int		i;
	char	*str;

	i = 0;
	(void) format;
	str = va_arg (arg, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	print_character(char *format, va_list arg)
{
	int	i;

	i = 1;
	if (*format == 's')
		i = print_s(format, arg);
	else if (*format == 'c')
		print_c(format, arg);
	else if (*format == '%')
		ft_putchar_fd('%', 1);
	return (i);
}
