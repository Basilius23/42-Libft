/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:50:26 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/09 19:29:56 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		left;
	int		right;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	left = 0;
	while (s1[left] && ft_strchr(set, s1[left]))
		left++;
	right = ft_strlen(s1);
	while (right > left && ft_strchr(set, s1[right - 1]))
		right--;
	res = (char *) malloc((right - left +1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + left, right - left + 1);
	return (res);
}
