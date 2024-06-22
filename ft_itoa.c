/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:29:14 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/22 11:48:47 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *x, unsigned int num, long int len)
{
	while (number > 0)
	{
		x[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (x);
}

static long	int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	len;
	size_t		number;
	char		*x;

	len = ft_len(n);
	x = (char *) malloc(sizeof(char) * (len + 1));
	if (!(x))
		return (NULL);
	x[len--] = '\0';
	if (n == 0)
		x[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		x[0] = '-';
	}
	else
		number = n;
	x = ft_array(x, number, len);
	return (x);
}
