/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:55:48 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/10 14:54:45 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
input	: void* (dest); void* (src); size_t (n)
return	: void* (dest)
desc	: move n bytes from src to dest The memory areas may overlap: copying 
	  takes place as though the  bytes in src are first copied into a 
	  temporary array that does not overlap src or dest, and the bytes
	  are then copied from  the  temporary array to dest.
*/

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
/*
#include <unistd.h>
int	main(void)
{
	char	s1[] = "testdgdgdfdfgfdvdg";
	char    t1[] = "123456789";
	char    s[] = "testdgdgdfdfgfdvdg";
        char    t[] = "123456789";

	int	i = 0;

	ft_memmove(s1, t1, 5);
	memmove(s, t, 5);
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
