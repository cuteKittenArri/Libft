/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 23:40:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 01:41:04 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1cpy;
	const unsigned char	*s2cpy;
	size_t				i;

	i = 0;
	s1cpy = (const unsigned char *)s1;
	s2cpy = (const unsigned char *)s2;
	while (i < n)
	{
		if (*s1cpy != *s2cpy)
		{
			return (*s1cpy - *s2cpy);
		}
		s1cpy++;
		s2cpy++;
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = {-127, 0, 127, 0};
    char s2[] = {0, 0, 127, 0};
	//char c = -128;
    
    printf("%d\n", ft_memcmp((const void *)s, (const void *)s2, 1));
	printf("%d\n", memcmp((const void *)s, (const void *)s2, 2));
	//printf("%c", c);
} */
