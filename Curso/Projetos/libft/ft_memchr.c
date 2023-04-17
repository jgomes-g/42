/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:45:49 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:46:51 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)&cs[i]);
		i++;
	}
	return (NULL);
}
