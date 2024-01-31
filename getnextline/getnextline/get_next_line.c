/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <ngaulthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:34:07 by ngaulthi          #+#    #+#             */
/*   Updated: 2024/01/31 20:16:50 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	strlenght(char *src)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != '\n')
		i++;
	if (src[i] == '\n')
		i++;
	return (i);
}
int	check_n(char *src)
{
	int	i;
	int ncount;

	i = 0;
	ncount = 0;
	while (src[i])
	{
		if (src[i] == '\n')
			ncount++;
		i++;
	}
	return (ncount);
}

char    *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = "\0";
	size_t	n;
	char	*line;

	line = ft_strdup("");
	if (!line)
		return (NULL);
	n = check_n(buffer);
	if (buffer[0] == '\0') 
	{
		line = readline(line, buffer, n, fd);
		if(!line)
			return (NULL);
		if (BUFFER_SIZE == 1)
			ft_memmove(buffer, buffer + strlenght(buffer), 1);
		else if (buffer[0] != '\0')
			ft_memmove(buffer, buffer + strlenght(buffer), BUFFER_SIZE - strlenght(buffer) + 1);
	}
	else
	{
		line = ft_strjoin(line, ft_strdup(buffer));
		if(!line)
				return (NULL);
		n = check_n(buffer);
		ft_memmove(buffer, buffer + strlenght(buffer), BUFFER_SIZE - strlenght(buffer) + 1);
		if (n == 0)
		{	
			line = readline(line, buffer, n, fd);
			if(!line)
				return (NULL);
			if (BUFFER_SIZE == 1)
				ft_memmove(buffer, buffer + strlenght(buffer), 1);
			else if (buffer[0] != '\0' )
				ft_memmove(buffer, buffer + strlenght(buffer), BUFFER_SIZE - strlenght(buffer) + 1);
		}
	}
	return (line);
}
// int main()
// {
// 	int fd = open("1char.txt", O_RDONLY);
// 	char *line;
// 	int i = 1;

// 	while((line = get_next_line(fd)))
// 	{
// 		printf("line %d => %s",i,line);
// 		free(line);
// 		i++;
// 	}
// }