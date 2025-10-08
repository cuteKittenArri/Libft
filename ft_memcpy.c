/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 00:12:12 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:23:54 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*leer;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	leer = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		leer[i] = s[i];
		i++;
	}
	return (dest);
}
/*

int main(void)
{
	void *dst;
	const char *a = "mama4321";
	const void *sorc = a;

	dst = malloc(8);
	dst = ft_memcpy(dst, sorc, 8);
	write(1, dst, 8);
}
*/