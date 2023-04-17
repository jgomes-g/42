/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:59:10 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:59:18 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	j;

	dest = (char *)malloc(len + 1);
	if (!s || !dest)
		return (0);
	j = 0;
	while (start < ft_strlen(s) && j < len)
		dest[j++] = s[start++];
	dest[j] = '\0';
	return (dest);
}
