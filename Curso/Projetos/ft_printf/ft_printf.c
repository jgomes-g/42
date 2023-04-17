/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:00:40 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/12/13 17:00:49 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_format(char *form, va_list arg)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (form[i])
	{
		if (form[i] == '%')
		{
			i++;
			if (form[i] == 's' || form[i] == 'c' || form[i] == '%')
				ret += print_character(form + i, arg);
			else if (form[i] == 'd' || form[i] == 'i' || form[i] == 'u')
				ret += print_integer(form + i, arg);
			else if (form[i] == 'p' || form[i] == 'x' || form[i] == 'X')
				ret += print_hexadecimal(form + i, arg);
		}
		else
			ret += write(1, &form[i], 1);
		i++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;

	va_start (arg, format);
	i = ft_format((char *)format, arg);
	va_end (arg);
	return (i);
}
