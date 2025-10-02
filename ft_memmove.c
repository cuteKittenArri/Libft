/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/02 19:44:31 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char dest[] = "mamaas1234";
	const void *src = &dest[4];
	void *leerout = ft_memmove((void *)dest, src, 4);
	char dest1[] = "mamaas1234";
	const void *src1 = &dest[4];
	void *leerout1 = ft_memmove((void *)dest1, src1, 4);

	write(1, leerout, 8);
	printf("\n");
	write(1, leerout1, 8);
}
*/