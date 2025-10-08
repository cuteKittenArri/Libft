/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:32:29 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:24:07 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	while ((i < len))
	{
		f(i, &s[i]);
		i++;
	}
}
/*

void    ft_called_function(unsigned int i, char *c)
{
    printf("Index: %d Character: %c\n", i, *c);
    *c = '#';
}

int main(void)
{
    char str[] = "hallo, Andy";

    printf("%s\n", str);
    ft_striteri(str, ft_called_function);
    printf("%s\n", str);
}
*/