/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:36:05 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 12:37:52 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
input : const char *
return : size_t
desc : return lenght of string without '/0'
*/
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%ld", ft_strlen("h445 45"));
}*/
