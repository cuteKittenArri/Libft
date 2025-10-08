/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 02:23:35 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 20:34:06 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*dst;

	i = (ft_strlen(s1) + ft_strlen(s2));
	dst = malloc(i + 1);
	if (!dst)
		return (0);
	(void)ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	(void)ft_strlcat(dst, s2, i + 1);
	return (dst);
}
/*

int main(void)
{
	const char *s1 = "";
	const char *s2 = "";
	
	write(1, s1, 9);
	printf("\n");
	write(1, ft_strjoin(s1, s2), 8);
	printf("\n");
	write(1, s1, 9);
}
*/