/* *********************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:21:22 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/01 20:47:10 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_strrchr(const char *s, int c);
{
    unsigned int    i;
    char    *s;
    char    cc;
    
    char    c = cc;
    res = NULL;
    i = 0;
    
    while (s[i])
    {
        if (s[i] = cc)
            res = (char *) &s[i];
        i++;
    }
    if (s[i] = c)
        return ((char *) &s[i]);
    return (res);
}