/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:30:35 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 11:48:08 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i; 
	const char	*source;
	char	*destination;
	if (src == dst)
		return (dst);
	if (!dst && !src)
		return (NULL);
	i = 0;
	source = (const char	*)src;
	destination = (char	*)dst;
	if (destination < source)
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	i = len;
	if (destination > source)
	{
		while (i)
		{
			destination[i-1] = source[i-1];
			i--;
		}
	}
	return (dst);
}
