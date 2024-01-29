/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <ngaulthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:40:02 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/12/19 18:07:15 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

char    *get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*readline(char *line, char *buffer, size_t n, int fd);
int	strlenght(const char *src);
int	check_n(char *src);

#endif
#endif