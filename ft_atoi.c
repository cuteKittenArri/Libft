/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:50:31 by stmuller          #+#    #+#             */
/*   Updated: 2025/09/30 18:53:10 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
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
int	main(void)
{
	printf("%d\n", atoi("123"));
	printf("%d", ft_atoi("123"));
}*/
