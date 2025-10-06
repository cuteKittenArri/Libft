/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/06 19:26:53 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_howmuch(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return ("");
	while (ft_howmuch(set, s1[i]))
		i++;
	while (ft_howmuch(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j - i) + 1));
}

static int	ft_howmuch(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	const char	*s1 = "gabababDavid ist ne geile Schnittegbababa";
	char		*new;

	new = ft_strtrim(s1, "gab");
	printf("%s\n", new);
	printf("%s", s1);
}
*/