/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:26:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 01:41:34 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == a)
		return ((char *)s);
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "tripouille";
	char s2[] = "tripouille";
	char c = 't' + 256;
	printf("%s\n", ft_strchr(s, 't' + 256) );
	printf("%s\n", strchr(s2, 't' + 256));
	printf("%c", c);
}
 */