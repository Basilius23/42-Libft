/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbychik <vbychik@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:21:22 by vbychik           #+#    #+#             */
/*   Updated: 2024/06/01 20:47:10 by vbychik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_memmove(void *dst, const void *src, size_t len)
{
    char  *tmp_src;
    char  *tmp_dst;
    size_t  i;

    if (!src && !dst)
      return (NULL);
  
    tmp_dst = (char *) dst;
    tmp_src = (char *) src;
    i = 0;

    if (tmp_dst > tmp_src)
      while (len-- > 0)
        tmp_dst[len] = tmp_src[len];
    else
    {
      while (i++ < len)
        tmp_dst[i] = tmp_src[i];
    }
    return (dst);
}
