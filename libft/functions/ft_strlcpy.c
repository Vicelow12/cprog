/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:28:14 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/10 15:02:15 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
input : char* (dst); const char* (src); size_t (size)
return : size_t (src)
desc : copy up to size - 1 char from src to dst, Nul terminating the result
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
		ft_memcpy(dst, src, srclen + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (srclen);
}
/*#include <unistd.h>
int	main(void)
{
	char    s1[] = "testdgdgdfdfgfdvdg";
        char    t1[] = "123456789";
	char    s[] = "testdgdgdfdfgfdvdg";
        char    t[] = "123456789";

        int     i = 0;

        ft_strlcpy(s1, t1, 5);
	strlcpy(s1, t1, 5);
        while (s1[i])
        {
                write(1, &s1[i], 1);
                i++;
        }
        i = 0;

        write(1, "\n", 1);

}*/
