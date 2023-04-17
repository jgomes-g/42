/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:31:17 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/08/22 21:37:43 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	long int	s;

	s = nb;
	if (s < 0)
	{
		s = -1 * s;
		ft_putchar('-');
	}
	if (s < 10)
	{
		ft_putchar(s + '0');
	}
	else
	{
		ft_putnbr(s / 10);
		ft_putnbr(s % 10);
	}
}
