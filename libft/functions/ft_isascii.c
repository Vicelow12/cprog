/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:05:41 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/08 11:13:58 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*      
input : int
return : int 
desc : return 1 if input is in ascii table, else 0
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
