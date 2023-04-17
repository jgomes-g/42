/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:50:35 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/12/13 16:51:00 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	print_id(char *format, va_list arg)
{
	int		i;
	char	*str;

	(void) format;
	i = va_arg (arg, int);
	str = ft_itoa(i);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	i = ft_strlen(str);
	free (str);
	return (i);
}

int	print_u(char *format, va_list arg)
{	
	unsigned int	i;
	int				j;

	(void) format;
	i = va_arg (arg, unsigned int);
	j = ft_putnbr_base_fd(i, "0123456789", 1);
	return (j);
}

int	print_integer(char *format, va_list arg)
{
	int	i;

	i = 1;
	if (*format == 'd' || *format == 'i')
		i = print_id(format, arg);
	else if (*format == 'u')
		i = print_u(format, arg);
	return (i);
}
