/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:35:03 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:28:15 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*c1 > *c2 || *c1 < *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
		n--;
	}
	return (0);
}
