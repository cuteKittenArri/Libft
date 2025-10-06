/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:05:46 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/06 18:11:26 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*int_str;

	int_str = ft_itoa(n);
	write(fd, int_str, ft_strlen(int_str));
}
/*
int main(void)
{
	ft_putnbr_fd(0, 1);
}
*/