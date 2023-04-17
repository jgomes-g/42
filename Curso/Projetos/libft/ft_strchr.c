/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:52:53 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:53:00 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (cs[i])
	{
		if (cs[i] == (char)c)
			return (&((char *)cs)[i]);
		i++;
	}
	if (c == '\0')
	{
		return (&((char *)cs)[i]);
	}
	return (NULL);
}
