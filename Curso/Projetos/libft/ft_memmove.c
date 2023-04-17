/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:49:06 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/11/14 08:49:15 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pt_dest;
	char	*pt_src;

	i = 0;
	pt_dest = (char *)dest;
	pt_src = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (pt_src > pt_dest)
	{
		while (n--)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			pt_dest[n] = pt_src[n];
		}
	}
	return (dest);
}
