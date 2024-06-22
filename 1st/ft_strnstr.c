/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:35:03 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/08 15:57:40 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == 0)
		return ((char *) s1);
	while (s1[i] && i < len)
	{
		while (s1[i + j] == s2[j] && s1[i + j] && i + j < len)
		{
			j++;
			if (s2[j] == 0)
				return ((char *) s1 + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
