/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 23:40:10 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/03 01:00:49 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1cpy;
	const char	*s2cpy;
	size_t		i;

	i = 0;
	s1cpy = (const char *)s1;
	s2cpy = (const char *)s2;
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
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *s1 = "cccb";
    const char *s2 = "cccc";
    
    printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, 4));
}
*/