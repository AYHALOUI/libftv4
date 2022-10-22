/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:13:16 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 13:17:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    size_t ld;
    size_t ls;

    if (!dstsize)
        return (ft_strlen(src));
    ls = ft_strlen(src);
    ld = ft_strlen(dst); 
    len = ld;
    if (dstsize <= ft_strlen(dst))
        return (dstsize+ft_strlen(src));
    while (dstsize - 1 - len && *src)
    {
        dst[len] = *src++;
        dst[len +1] = '\0';
        len = ft_strlen(dst);
    }       
    return (ls+ld);
}