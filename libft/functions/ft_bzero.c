/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:40:02 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/09 12:51:58 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

/*
input : void* (s); size_t (n)
return : void* (s)
desc : fill n bytes with '\0' at s address
*/

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*cpy;

	i = 0;
	cpy = (char *)s;
	while (i < n)
	{
		cpy[i] = '\0';
		i++;
	}
}
/*
#include <unistd.h>
int	main(void)
{
	char	s[] = "testdgdgdfdfgfdvdg";
	char    t[] = "testfdgfdfdgfdgfdg";
	int	i = 0;

	ft_bzero(s, 6);
	bzero(t, 6);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	while (t[i])
	{
		write(1, &t[i], 1);
		i++;
	}
}*/
