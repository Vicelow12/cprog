/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:00:15 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/22 15:22:08 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	while (i < n)
	{
		if (cpy[i] == (unsigned char)c)
			return (cpy + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int	s[7] = {-49, 49, 1, -1, 0, -2, 2};
	int	s1[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s",(char *)ft_memchr(s, -1, 7));
	printf("%s","\n");
	printf("%s", (char *)memchr(s1, -1, 7));

}*/
