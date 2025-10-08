/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 13:43:12 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:24:21 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	l;

	i = 0;
	if (! *little)
	{
		return ((char *)big);
	}
	while (big[i] && len > (size_t)i)
	{
		l = 0;
		while (little[l] == big[i + l])
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
/*

int main(void)
{
	printf("%s", ft_strnstr("", "3", 20));
}
*/