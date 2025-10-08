/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 23:09:16 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:33:31 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = s;
	i = 0;
	while (i < n)
	{
		*r = 0;
		r++;
		i++;
	}
}
/*

int main(void)
{
	char lol[] = "#############";
	void *leer;
	void *leer2;

	leer = lol;
	leer2 = lol;
	printf("%s\n", (char *)leer);
	printf("%s\n", (char *)leer2);
	ft_bzero(leer, 4);
	bzero(leer2, 4);
	write(1, (char *)leer, 8);
	printf("\n");
	write(1, (char *)leer2, 8);
}
*/