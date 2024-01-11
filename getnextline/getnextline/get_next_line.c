/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <ngaulthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:34:07 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/12/21 18:15:58 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// static	int	strlenght(const char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strdup(const char *s)
// {
// 	char	*new;
// 	int		i;

// 	i = 0;
// 	new = malloc(sizeof(char) * strlenght (s) + 1);
// 	if (!new)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		new[i] = s[i];
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// }
int	strlenght(const char *src)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != '\n')
		i++;
	return (i);
}
int	check_n(char *buffer)
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
	new[i] = '\0';
	return (new);
}

char    *get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = "\0";
	static int n = 0;
	ssize_t	bytesread;
	size_t	i;

	i = 0;
	while (buffer[0] == '\0' || n == 0)
	{
		bytesread = read(fd, buffer, BUFFER_SIZE);
		if (bytesread <= 0)
			return (NULL);
		buffer[bytesread] = '\0';
		n = check_n(buffer);
	}
	return (ft_strdup(buffer));
}
int main()
{
	int fd = open("test.txt", O_RDONLY);
	char *line;
	int i = 1;

	line = get_next_line(fd);
	while((line = get_next_line(fd)))
	{
		printf("line %d => %s",i,line);
		free(line);
		i++;
	}
	
	// fd = open("test.txt", O_RDONLY);
	// line = get_next_line(fd);
	// printf("%s",line);
	// free(line);
	// return (0);
}


/*example main
ret = NULL
	if ( buffer[0] = '\0')
		{
			read ...

		}
	strjoin(ret , buffer)
	while (check_n(buf) && bytesread)
	{
		read
		ret = strjoin(ret, buffer)
	}
	n = check(ret)
	clear buffer
*/