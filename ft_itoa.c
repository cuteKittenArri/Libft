/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:43:33 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/06 22:59:36 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_intlen(int n);
static char	*ft_int_min(void);

char	*ft_itoa(int n)
{
	int		i;
	int		minus;
	char	*istr;

	minus = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_int_min());
		minus = 1;
		n = n * (-1);
	}
	i = ft_intlen(n);
	istr = malloc(i + minus + 1);
	if (!istr)
		return (NULL);
	istr[i + minus] = '\0';
	while (--i >= 0)
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

static char	*ft_int_min(void)
{
	char	*minint;

	minint = malloc(11);
	if (!minint)
		return (NULL);
	minint = "-2147483648";
	return (minint);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_itoa(2147483647));
}
*/
