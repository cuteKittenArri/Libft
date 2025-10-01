/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:36:52 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/01 15:58:26 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*r;

	r = s;
	i = 0;
	while (i < n)
	{
		*r = (char)c;
		r++;
		i++;
	}
	return (s);
}

TODO: TESTCASE(main)