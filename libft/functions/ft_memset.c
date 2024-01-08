/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:26 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/09 13:07:07 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
input : void* (s); int (c); size_t (n)
return : void* (s)
desc : fill n bytes with c at s address
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = (char *)s;
	while (i < n)
	{
		cpy[i] = c;
		i++;
	}
	return (s);
}
/*
#include <unistd.h>
int	main(void)
{
	int	s[5] = {1, 2, 3, 4, 5};
	int     t[5] = {1, 2, 3, 4, 5};
	int	i = 0;

	ft_memset(s, 0, 3);
	memset(t, 0, 3);
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
