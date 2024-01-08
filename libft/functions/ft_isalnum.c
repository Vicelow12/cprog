/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:45:58 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 11:01:52 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input : int
return : int
desc : return 1 if input is alphanumeric, else 0
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int     main(void)
{
        printf("%d",ft_isalnum('z'));
}*/
