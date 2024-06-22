/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:35:03 by vbychik           #+#    #+#             */
/*   Updated: 2024/05/24 21:05:29 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int i, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) str;
	while (n-- > 0)
	{
		*p++ = (unsigned char) i;
		n--;
	}
	return (str);
}
