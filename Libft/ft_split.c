/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 09:37:25 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 22:44:45 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			i++;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int start)
{
	int	i;
	int	count;

	i = start;
	count = 0;
	while (s[i] && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(const char *s, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(s, c, start);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
		word[j++] = s[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = -1;
	if (!s)
		return (NULL);
	arr = (char **) malloc((sizeof(char *) * (ft_wordcount(s, c) + 1)));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			arr[j++] = ft_getword(s, c, i++);
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	arr[j++] = NULL;
	return (arr);
}
*/

static int	count_splits(char const *s, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*s != '\0')
	{
		if (*s != c && !in_substring)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
		{
			in_substring = 0;
		}
		s++;
	}
	return (count);
}

static int	word_len(const char *s, char c, int i, int start)
{
	if (s[i] != c)
		i = i + 1;
	if (s[i] == c || s[i] == '\0')
	{
		return (i - start);
	}
	else
	{
		return (i - start + 1);
	}
}

int	do_copy(char **dst, int length, const char *s, int start)
{
	*dst = (char *)malloc((length + 1) * sizeof(char));
	if (*dst == NULL)
		return (0);
	ft_strlcpy(*dst, &s[start], length +1);
	(*dst)[length] = '\0';
	return (1);
}

int	do_split(char **res, char const *s, char c, int count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (!do_copy(&res[j], word_len(s, c, i, start), s, start))
				return (0);
			start = -1;
			j++;
		}
		i++;
	}
	if (j < count && !do_copy(&res[j], word_len(s, c, i, start), s, start))
		return (0);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		count;
	int		i;

	if (s == NULL)
		return (NULL);
	count = count_splits(s, c);
	res = (char **)malloc((count + 1) * sizeof(char *));
	if (res == NULL)
	{
		return (NULL);
	}
	if (!do_split(res, s, c, count))
	{
		i = 0;
		while (i < count)
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (NULL);
	}
	res[count] = NULL;
	return (res);
}
