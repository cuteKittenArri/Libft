/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:08:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:24:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	idst;
	size_t	isrc;

	dstlen = ft_strlen(dst);
	idst = dstlen;
	isrc = 0;
	if (size <= dstlen)
		return (size + ft_strlen(src));
	while (idst < size -1 && src[isrc])
	{
		dst[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dst[idst] = '\0';
	return (dstlen + ft_strlen(src));
}
/*

int main(void)
{
	char dest[30] = "Stefan";
	char dest1[30] = "Stefan";
	char *src = &dest[2];//"8444papa54321";
	char *src1 = &dest1[2];//"8444papa54321";
	size_t size = 20;
	unsigned int lol = strlcat(dest, src, size);
	unsigned int lol1 = ft_strlcat(dest1, src1, size);
	printf("Orig Return: %d\n", lol);
	printf("Orig Return: %s\n", dest);
	printf("Orig Return: %s\n", src);
	printf("FT_  Return: %d\n", lol1);
	printf("FT_  Return: %s\n", dest1);
	printf("FT_  Return: %s\n", src1);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	
	trottel = dst;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size <= (unsigned long)ft_strlen(dst))
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
	//srclen = ft_strlen(src);
	dstlen = ft_strlen(trottel);
	return (dstlen + srclen);
}*/