/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:51:04 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 12:00:48 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t 	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t len;
    size_t i;

    len = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (ft_strlen(src));
}

int main()
{
    char dst[20];
    char src[10] = "aymene";
    printf("%zu", ft_strlcpy(dst, src, 5));
    return (0);
}