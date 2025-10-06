/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:50:31 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/06 20:46:37 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		minus = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9')
	{
		result = result * 10 +(*nptr -48);
		nptr++;
	}
	return (result * minus);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", atoi("123234567823456789123234567823456789"));
	printf("%d", ft_atoi("123234567823456789123234567823456789"));
}
*/