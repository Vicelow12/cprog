/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <ngaulthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:18:46 by ngaulthi          #+#    #+#             */
/*   Updated: 2024/01/29 13:18:46 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = malloc(sizeof(char) * (strlenght(s1) + strlenght(s2) + 1));
	if (!join)
		return (NULL);
	while (i < (int)strlenght(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (i < (int)strlenght(s1) + (int)strlenght(s2))
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}
char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(char) * (strlenght (s) + 1));
	if (!new)
		return (NULL);
	while (s[i] && s[i] != '\n')
	{
		new[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
	{
		new[i] = '\n';
		i++;
	}
	new[i] = '\0';
	return (new);
}
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpy_dest;
	char	*cpy_src;

	if (!(dest || src))
		return (NULL);
	i = 0;
	cpy_dest = (char *)dest;
	cpy_src = (char *)src;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (dest);
}
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpy_dest;
	char	*cpy_src;

	i = 0;
	cpy_dest = (char *)dest;
	cpy_src = (char *)src;
	if (cpy_src == cpy_dest || n == 0)
		return (dest);
	if (cpy_dest > cpy_src && cpy_dest - cpy_src < (int)n)
	{
		i = n - 1;
		while ((int)i >= 0)
		{
			cpy_dest[i] = cpy_src[i];
			i--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
char	*readline(char *line, char *buffer, size_t n, int fd)
{
	ssize_t bytesread;

	while (n == 0)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread <= 0)
		{
			if (bytesread == 0)
			{
				if (line[0] == '\0')
				{
					free(line);
					return (NULL);
				}
				else
					break;
			}
			else
			{
				free(line);
				return (NULL);
			}
		}
		buffer[bytesread] = '\0';
		n = check_n(buffer);
		line = ft_strjoin(line, ft_strdup(buffer));
	}
    return (line);
}