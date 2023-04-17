/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:57:51 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:57:57 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*little))
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len && *(big + i) != '\0')
	{
		while (*(big + i + j) == *(little + j)
			&& *(little + j) != '\0' && *(big + i + j) != '\0' && i + j < len)
			j++;
		if (*(little + j) == '\0')
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (0);
}
