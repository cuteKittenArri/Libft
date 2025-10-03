/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:28:44 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/02 23:26:06 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	r;
	unsigned int	i;

	r = 0;
	i = 0;
	while (src[r])
		r++;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (r);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <unistd.h>

int main(void)
{
	char dest[20];
	char dest2[20];
	const char *src = "halloMam4!";
	unsigned int size = 15;
	unsigned int lol1 = ft_strlcpy(dest, src, size);
	unsigned int lol2 = strlcpy(dest2, src, size);
	printf("%s\n", dest);
	printf("%s\n", dest2);
	printf("%d\n", lol1);
	printf("%d\n", lol2);
}*/
