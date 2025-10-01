/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:08:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/01 11:52:22 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//int	ft_strlen(const char *stringbro);
#include <stddef.h>

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dstlen;
	int	srclen;

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





int	ft_strlen(const char *stringbro)
{
	int	r;

	r = 0;
	while (stringbro[r])
		r++;
	return (r);
}
		


#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char dest[30] = "mtdzq";
	char dest1[30] = "mtdzq";
	unsigned int lol = strlcat(dest, "8444papa54321", 7);
	unsigned int lol1 = ft_strlcat(dest1, "8444papa54321", 7);
	printf("%d\n", lol);
	printf("%s\n", dest);
	printf("%d\n", lol1);
	printf("%s\n", dest1);

}*/
