/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 22:26:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/09/30 22:40:25 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}
/*
#include <unistd.h>

int main(void)
{
	char *lathyrus = ft_strchr("mamapapa", 'p');
	write(1, lathyrus, 3);
}*/
