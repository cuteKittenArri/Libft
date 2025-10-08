/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:23:51 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:24:19 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*retstr;

	i = 0;
	len = ft_strlen(s);
	retstr = malloc(len + 1);
	if (!retstr)
		return (0);
	while (i < len)
	{
		retstr[i] = f(i, s[i]);
		i++;
	}
	retstr[i] = '\0';
	return (retstr);
}
/*

char	ft_called_function(unsigned int i, char c)
{
	printf("Index: %d Character: %c\n", i, c);
	return (i + 48);
}

int main(void)
{
	printf("%s", ft_strmapi("Hallo, Andy", ft_called_function));
}
*/