/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 02:38:37 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/06 02:38:45 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base_len(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}			
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	sign(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign_nb;
	int		nb;
	int		nb2;
	int		base_len;

	nb = 0;
	i = 0;
	base_len = check_base_len(base);
	if (base_len >= 2)
	{
		sign_nb = sign(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= sign_nb);
	}
	return (0);
}
