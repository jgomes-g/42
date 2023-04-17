/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:19:19 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/05 20:19:44 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	fact = 1;
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
