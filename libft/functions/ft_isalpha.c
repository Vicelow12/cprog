/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:43:00 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 10:25:56 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input : int
return : int
desc : return 1 if input is alphabetic, else 0
*/

int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z' || (c < 'a' && c > 'Z'))
		return (0);
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d",ft_isalpha("fdgdf"));
}*/
