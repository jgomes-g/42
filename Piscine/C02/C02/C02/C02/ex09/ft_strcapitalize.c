/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:08:03 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/05 20:09:13 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	capitalizar;

	c = 0;
	capitalizar = 0;
	while (str[c] != '\0')
	{
		if (capitalizar == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
			capitalizar = 1;
		}
		else if (capitalizar > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + ('a' - 'A');
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			capitalizar = 0;
		else if ((str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			capitalizar = 0;
		else
			capitalizar = 1;
		c++;
	}
	return (str);
}
