/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 01:26:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 14:48:16 by stmuller         ###   ########.fr       */
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
	if (dest > src)
	{
		if (n != 0)
			n = n -1;
		while (0 < n)
		{
			dstcpy[n] = srccpy[n];
			n--;
		}
		dstcpy[n] = srccpy[n];
		return (dest);
	}
	while (i < n)
	{
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (dest);
}
