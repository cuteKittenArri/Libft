/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:36:52 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:23:57 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*

int main(void)
{
	char lol[] = "";
	void *leer;
	void	*leer2;

	leer = lol;
	leer2 = lol;
	printf("%s\n", (char *)leer);
	//printf("%s\n", (char *)leer2);
	//printf("%s\n", (char *)memset(leer, 35, 4));
	printf("%s", (char *)ft_memset(leer2, 35, 4));
	return 0;
}
*/