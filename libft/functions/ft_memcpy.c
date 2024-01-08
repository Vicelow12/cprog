/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:54:00 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/28 14:37:04 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
input : void* (dest); void* (src); size_t (n)
return : void* (dest)
desc : copy n bytes from src to dest
*/

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
/*
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char	*s1 = NULL;
	char    *t1 = NULL;
	char    *s = NULL;
        char    *t = NULL;

	int	i = 0;

	ft_memcpy(((void*)0), ((void*)0), 3);
	memcpy(((void*)0), ((void*)0), 3);
	while (s1[i])
	{
		write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	write(1, "\n", 1);
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}*/
