/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 01:50:25 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:28:11 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	if (len <= 0)
		return (ft_calloc(1, 1));
	i = 0;
	sub = malloc(len + 1);
	if (!sub)
		return (0);
	if (ft_strlen(s) <= (size_t)start)
		return (calloc(1, 1));
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*

int main(void)
{
	const char *str = "hallom1234";
	char *sub = ft_substr(str, 11, 2);

	printf("%s\n", str);
	printf("%s", sub);
}
*/