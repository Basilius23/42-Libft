/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:21:22 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:21:42 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int a, size_t b)
{
	unsigned char	*s;

	s = (unsigned char *) str;
	while (b > 0)
	{
		if (*s == (unsigned char)a)
			return (s);
		s++;
		b--;
	}
	return (NULL);
}
