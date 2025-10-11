/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:43:31 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 01:44:16 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*start;
	unsigned char	a;

	a = c;
	start = s;
	while (*s)
		s++;
	while (s != start)
	{
		if (*s == a)
			return ((char *)s);
		s--;
	}
	if (*s == a)
		return ((char *)s);
	return (0);
}
/*

int main(void)
{
	char *lathyrus = ft_strrchr("mamapapa", 't');
	write(1, lathyrus, 3);
	printf("%s", lathyrus);
}
*/