/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:28:44 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/07 20:47:12 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <unistd.h>

int main(void)
{
	char src1[20] = "halloMam4!";
	char src2[20] = "halloMam4!";
	char *dst1 = &src1[7];
	char *dst2 = &src2[7];
	
	char source1[31] = "Hey Steffi, du bist ein Penner";
	char *dest1 = source1 + 4;
	char source2[31] = "Hey Steffi, du bist ein Penner";
	char *dest4 = source2 + 4;
	unsigned int size = 3;
	unsigned int lol1 = ft_strlcpy(dst1, src1, size);
	unsigned int lol2 = strlcpy(dst2, src2, size);
	printf("%s\n", dst1);
	printf("%s\n", dst2);
	printf("%d\n", lol1);
	printf("%d\n", lol2);
	
	printf("dest1: %s\n", dest1);
	printf("source1: %s\n", source1);
	printf("dest 2: %s\n", dest4);
	printf("sopurce2: %s\n", source2);
	printf("return ft: %d\n", lol1);
	printf("return orig: %d\n", lol2);

}
*/