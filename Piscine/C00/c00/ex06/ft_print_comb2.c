/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:49:19 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/08/22 21:17:24 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int x)
{
	char	y;

	y = x / 10 + '0';
	write(1, &y, 1);
	y = x % 10 + '0';
	write(1, &y, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a);
			write(1, " ", 1);
			ft_write(b);
			if (a != 98)
				write(1, ", ", 2);
			b = b + 1;
		}
		a = a + 1;
	}
}
