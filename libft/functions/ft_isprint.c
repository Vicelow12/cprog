/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:14:54 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 11:20:55 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
input : int
return : int
desc : return 1 if input is printable, else 0
*/
int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
