/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:27:31 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 10:43:00 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input : int
return : int
desc : return 1 if input is digit, else 0
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%d",ft_isdigit('q'));
}
*/
