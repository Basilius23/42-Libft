/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:05:55 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:21:55 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *scr, size_t n)
{
	size_t	i;

	i = ft_strlen(scr);
	if (i +1 < n)
		ft_memcpy (dst, scr, i +1);
	else if (n != 0)
	{
		ft_memcpy (dst, scr, n - 1);
		dst[n - 1] = 0;
	}
	return (i);
}
