/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:29:05 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/22 09:57:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*source;
	unsigned int	i;

	source = (unsigned char *)s;
	i = 0;
	while (i < n && source[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&source[i]);
}
