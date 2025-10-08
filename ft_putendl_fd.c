/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:03:01 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/08 17:24:00 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	newl;

	newl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &newl, 1);
}
/*
int main(void)
{
	ft_putendl_fd("", 1);
}
*/