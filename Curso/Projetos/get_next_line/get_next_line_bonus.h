/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgomes-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:33:40 by jgomes-g          #+#    #+#             */
/*   Updated: 2023/02/21 21:33:48 by jgomes-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define MAX_FILES 10000

char	*get_next_line(int fd);

size_t	ft_strclen(const char *s, int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strndup(const char *s, size_t n);

char	*ft_strjoin(char *s1, const char *s2);

#endif
