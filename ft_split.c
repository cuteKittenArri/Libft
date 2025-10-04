/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:17:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/04 02:21:48 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int ft_wordscounter(char const *s, char c);
int	ft_word_len(char const *s, char c);

char **ft_split(char const *s, char c)
{
	char	**strarray;
	int		i;
	int		n;

	strarray = (char **)malloc(sizeof(char *) *ft_wordscounter(s, c) + 1);
	i = 0;
	n = 0;
	if (!strarray || !s)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (s[i] != c)
		{
			strarray[n] = ft_substr(s, i, ft_word_len(&s[i], c));
			n++;
			i = i + ft_word_len(&s[i], c);
		}
		else
			i++;
	}
	strarray[n] = 0;
	return (strarray);
}

int ft_wordscounter(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (words);
}

int	ft_word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	const char	*wohoo = "?david?ist?immer?noch?ne?geile?schnitte";
	char	**its_aliiive = ft_split(wohoo, '?');
	int	i = 0;
	int j = 0;
	while (its_aliiive[i])
	{
		printf("%s\n", its_aliiive[i]);
		i++;
	}
	
}
*/