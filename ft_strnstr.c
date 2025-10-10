/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:43:12 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/10 22:11:04 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	if (! *little)
	{
		return ((char *)big);
	}
	while (big[i] && len > i)
	{
		l = 0;
		while ((i + l) < len && little[l] && big[i + l]
			&& little[l] == big[i + l])
		{
			l++;
		}
		if (little[l] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char string[] = "Hello world. 42 is the answer to the universe, to 
	everything, based on hitchhiker's guide to the galaxy";
	char *ft_ptr = ft_strnstr(string, "galaxy", 150);
    char *std_ptr = strnstr(string, "galaxy", 150);
	printf("%s \n", ft_ptr);
	printf("%s \n", std_ptr);
	printf("%zu", ft_strlen(string));
} */
