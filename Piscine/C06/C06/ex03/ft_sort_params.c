/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:34:35 by jgomes-g          #+#    #+#             */
/*   Updated: 2022/09/05 20:35:04 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	j = argc;
	i = 1;
	while (i + 1 <= argc)
	{
		j = 2;
		while (j <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = tmp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
