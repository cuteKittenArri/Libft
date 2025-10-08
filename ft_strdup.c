/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:36:16 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 20:52:33 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = malloc(ft_strlen(s) + 1);
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*

int main(void)
{
    const char *s1 = "halloStefan";
    char *s2 = ft_strdup(s1);
    const char *ss1 = "halloStefan";
    char *ss2 = ft_strdup(ss1);

    printf("%s\n", s2);
    printf("%s\n", ss2);
}
*/