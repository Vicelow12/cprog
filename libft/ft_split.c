/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngaulthi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:13:42 by ngaulthi          #+#    #+#             */
/*   Updated: 2023/11/24 15:30:30 by ngaulthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	if (s[i] != c && s[i])
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static	void	*secure_malloc(char **tab, int i)
{
	while (i > 0)
	{
		i--;
		free(tab[i]);
	}
	free(tab);
	return (NULL);
}

static	void	malloc_str(char **tab, char const *s, char c)
{
	int    i;
   	int    j;
    	int    start;

    	i = 0;
    	j = 0;
    	while (s[i])
    	{
        	while (s[i] == c)
            		i++;
        	if (!s[i])
            		break ;
        	start = i;
        	while (s[i] && s[i] != c)
            		i++;
        	tab[j] = malloc(sizeof(char) * (i - start) + 1);
		if (!tab[i])
			secure_malloc(tab, i);
		i++;
	}
}

static	void	tab_fill(char **tab, const char *s, char c, int nb_word)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] == c && s[i])
		i++;
	while (j < nb_word)
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			tab[j][k] = s[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
		k = 0;
	}
	tab[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_word;

	nb_word = count_word(s, c);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	malloc_str(tab, s, c);
	tab_fill(tab, s, c, nb_word);
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s = "////iiii//////////";
	char	c = '/';
	char	**tab;
	int	i;

	i = 0;
	tab = ft_split(s, c);
	printf("%s", tab[0]);
	printf("%s", tab[1]);
	while (tab[i])
	{
		printf("%s", tab[i]);
		i++;
	}
}*/
