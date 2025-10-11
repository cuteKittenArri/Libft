/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 02:50:37 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstcpy;
	const unsigned char	*srccpy;

	i = 0;
	dstcpy = (unsigned char *)dest;
	srccpy = (const unsigned char *)src;
	if (dest < src)
	{
		while (i < n)
		{
			dstcpy[i] = srccpy[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (i < n)
		{
			dstcpy[n] = srccpy[n];
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
	
	printf("memcmp: %d\n", ft_memcmp(sResult, sResult2, 7));
	write(1, sResult, 7);
	printf("\n");
	write(1, sResult2, 7);
	printf("\n");
	printf("%s\n", "------------------MOVING----------------------------");
	write(1, (char *)memmove(sResult + 1, sResult, 2), 7);
	printf("\n");
	write(1, sResult, 7);
	printf("\n");
	printf("memcmp: %d\n", ft_memcmp(sResult, sResult2, 7));
	char sResult3[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult4[] = {67, 67, 68, 68, 69, 0, 45};
	printf("%s\n", "----------------------------------------------");
	printf("%d\n", memcmp(sResult3, sResult4, 7));
	write(1, (char *)memmove(sResult3 + 1, sResult3, 2), 7);
	printf("\n");
	write(1, sResult3 + 1, 7);
	printf("\n");
	printf("%d\n", memcmp(sResult3, sResult4, 7));
	/*  char dest[] = "mamaas1234";
	const void *src = &dest[4];
	void *leerout = ft_memmove((void *)dest, src, 4);
	char dest1[] = "mamaas1234";
	const void *src1 = &dest[4];
	void *leerout1 = ft_memmove((void *)dest1, src1, 4);

	write(1, leerout, 8);
	printf("\n");
	write(1, leerout1, 8);  */
}
