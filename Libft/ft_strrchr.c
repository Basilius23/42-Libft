/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:21:22 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:35:51 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
		return (tmp + len);
	while (len >= 0)
	{
		if (tmp[len] == (char)c)
			return (tmp + len);
		len--;
	}
	return (0);
}
