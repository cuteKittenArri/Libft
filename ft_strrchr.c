/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:43:31 by stmuller          #+#    #+#             */
/*   Updated: 2025/09/30 23:55:42 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	while (*s)
		s++;
	while (s != start)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*
#include <unistd.h>

int main(void)
{
	char *lathyrus = ft_strrchr("mamapapa", 't');
	write(1, lathyrus, 3);
}*/
