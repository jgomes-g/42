/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:27:08 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/05 20:28:24 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	m;

	m = nb / 2;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= m)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
