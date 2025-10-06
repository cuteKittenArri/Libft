/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:17:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/06 14:32:25 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_wordscounter(char const *s, char c);
static int	ft_word_len(char const *s, char c);
static char	**ft_failed(char **str, size_t n);

char	**ft_split(char const *s, char c)
{
	char	**strarray;
	size_t	i;
	size_t	n;

	strarray = (char **)malloc(sizeof(char *) * ft_wordscounter(s, c) + 1);
	i = 0;
	n = 0;
	if (!strarray || !s)
		return (ft_failed(strarray, 0));
	while (s[i])
	{
		if (s[i] != c)
		{
			strarray[n] = ft_substr(s, i, ft_word_len(&s[i], c));
			if (!strarray[n])
				return (ft_failed(strarray, n));
			n++;
			i = i + ft_word_len(&s[i], c);
		}
		else
			i++;
	}
	strarray[n] = 0;
	return (strarray);
}

static char	**ft_failed(char **str, size_t n)
{
	while (n > 0)
	{
		free((void *)str[n]);
		n--;
	}
	free(str);
	return (0);
}

static int	ft_wordscounter(char const *s, char c)
{
	size_t	i;
	size_t	words;

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

static int	ft_word_len(char const *s, char c)
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