/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:09:01 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/12/13 17:09:17 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//LIBRARY

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);

int	print_character(char *format, va_list arg);

int	print_integer(char *format, va_list arg);

int	print_hexadecimal(char *format, va_list arg);

#endif
