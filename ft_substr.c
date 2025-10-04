/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 01:50:25 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/03 02:20:14 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = malloc(len);
	if (ft_strlen(s) <= (size_t)start)
	{
		return (0);
	}
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	return (sub);
}
/*
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	const char *str = "hallom1234";
	char *sub = ft_substr(str, 11, 2);

	printf("%s\n", str);
	printf("%s", sub);
}
*/