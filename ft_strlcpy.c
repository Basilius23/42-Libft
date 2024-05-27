/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:05:55 by vbychik           #+#    #+#             */
/*   Updated: 2024/05/27 19:59:20 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	strlcpy(char *dest, const char *scr, size_t n)
{
	size_t	i;

	i = ft_strlen(src);
	if (i +1 < n)
		ft_memcpy (dst, src, i +1);
	else if (n != 0)
	{
		ft_memcpy (dst, src, n - 1);
		dst[n - 1] = 0;
	}
	return (i);
}
