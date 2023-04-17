/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:29:11 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/05 20:30:17 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else if (nb % 2 == 0 && nb != 2)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	else if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!(ft_is_prime(nb)))
			nb++;
	}
	return (nb);
}
