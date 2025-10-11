/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:43:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 01:41:20 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*istr;

	minus = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		minus = 1;
		n = n * (-1);
	}
	i = ft_intlen(n);
	istr = malloc(i + minus + 1);
	if (!istr)
		return (NULL);
	istr[i + minus] = '\0';
	while (--i + minus >= 0)
	{
		istr[i + minus] = (char)(n % 10) + 48;
		n = n / 10;
	}
	if (minus == 1)
		istr[0] = '-';
	return (istr);
}

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *test = ft_itoa(2147483647);
	printf("%s", test);
} */
