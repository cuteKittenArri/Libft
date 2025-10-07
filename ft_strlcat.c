/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:08:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/07 20:56:15 by stmuller         ###   ########.fr       */
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
	char dest[30] = "manuhu";
	char dest1[30] = "manuhu";
	char *src = dest;//"8444papa54321";
	char *src1 = dest;//"8444papa54321";
	size_t size = 9;
	unsigned int lol = strlcat(dest, src, size);
	unsigned int lol1 = ft_strlcat(dest1, src1, size);
	printf("Orig Return: %d\n", lol);
	printf("Orig Return: %s\n", dest);
	printf("Orig Return: %s\n", src);
	printf("FT_  Return: %d\n", lol1);
	printf("FT_  Return: %s\n", dest1);
	printf("FT_  Return: %s\n", src1);
}
*/