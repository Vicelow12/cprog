/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:27:38 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/27 16:29:45 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*cpy;

	cpy = (char *)big;
	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (cpy[i] && i < len)
	{
		while (cpy[i] == little[j] && i < len && cpy[i])
		{
			i++;
			j++;
		}
		if (j == ft_strlen(little))
			return (cpy + (i - j));
		else if (j != 0)
			i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	const char	*big = "hello my my worl\0d";
	const char	*big1 = "hello my my worl\0d";
	const char	*little = "my world";
	const char	*little1 = "my world";

	printf("%s", ft_strnstr(big, little, -1));
	printf("%s", strnstr(big1, little1, -1));


}*/
