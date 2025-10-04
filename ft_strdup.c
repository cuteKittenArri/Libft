/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:36:16 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/03 01:02:46 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(ft_strlen(s));
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
/*
#include <stdio.h>

int main(void)
{
    const char *s1 = "halloStefan";
    char *s2 = ft_strdup(s1);
    const char *ss1 = "halloStefan";
    char *ss2 = ft_strdup(ss1);

    printf("%s\n", s2);
    printf("%s\n", ss2);
}
*/