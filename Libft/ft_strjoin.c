/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:40:34 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:21:52 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i];
	res[j] = 0;
	return (res);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*res;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	res = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, s1_len +1);
	ft_strlcpy(res + s1_len, s2, s2_len + 1);
	return (res);
}
