/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 18:11:24 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/02 20:00:00 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tosearch;
	unsigned char	search;

	i = 0;
	search = (unsigned char)c;
	tosearch = (unsigned char *)s;
	while (i < n)
	{
		if (tosearch[i] == search)
		{
			return ((void *)&tosearch[i]);
		}
		i++;
	}
	return (0);
}
