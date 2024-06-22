/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:21:22 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:21:39 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len--)
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
	}
	else
	{
		while (len--)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dst);
}
