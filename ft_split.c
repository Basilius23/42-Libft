/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:20:30 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/09 21:52:33 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_substr;

	count = 0;
	in_substr = 0;
	while (*s)
	{
		if (*s != c && in_substr == 0)
		{
			in_substr = 1;
			count++;
		}
		else if (*s == c)
			in_substr = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	word = (char *) malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_split(char **split, int j)
{
	while (j-- > 0)
		free(split[j]);
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		start;

	if (!s || !(split = (char **) malloc((word_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= (int)ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == (int)ft_strlen(s)) && start >= 0)
		{
			if (!(split[j++] = word_dup(s, start, i)))
				return (free_split(split, j - 1), NULL);
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
