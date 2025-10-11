/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stmuller <stmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 00:50:04 by stmuller          #+#    #+#             */
/*   Updated: 2025/10/11 15:46:19 by stmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((size >= SIZE_MAX / nmemb) || (nmemb >= SIZE_MAX / size))
		return (0);
	array = malloc(size * nmemb);
	if (!array)
		return (0);
	ft_bzero(array, nmemb * size);
	return (array);
}
/*

int main(void)
{

}
*/
