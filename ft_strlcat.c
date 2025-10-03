/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:08:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/03 00:22:41 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= (unsigned long)dstlen)
		return (srclen + size);
	while (*dst)
	{
		size--;
		dst++;
	}
	while (--size > 0)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (dstlen + srclen);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char dest[30];
	for (int i = 0; i < 30; i++)
		dest[i] = 'a';
	char dest1[30];
	unsigned int lol = strlcat(dest, "8444papa54321", 3);
	//unsigned int lol1 = ft_strlcat(dest1, "8444papa54321", 1);
	printf("%d\n", lol);
	printf("%s\n", dest);
	//printf("%d\n", lol1);
	//printf("%s\n", dest1);
}
*/