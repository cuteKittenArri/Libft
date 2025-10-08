/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:28:44 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 18:40:05 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(&src[i]) + i);
}
/*
#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
	char dest1[31] = "Hey Steffi, du bist ein Penner";
	char *source1 = dest1 + 4;
	char dest4[31] = "Hey Steffi, du bist ein Penner";
	char *source2 = dest4 + 4;
	unsigned int size = 3;
	unsigned int lol1 = ft_strlcpy(dest1, source1, size);
	unsigned int lol2 = strlcpy(dest4, source2, size);

	printf("dest1: %s\n", dest1);
	printf("source1: %s\n", source1);
	printf("dest 2: %s\n", dest4);
	printf("sopurce2: %s\n", source2);
	printf("return ft: %d\n", lol1);
	printf("return orig: %d\n", lol2);

}
*/