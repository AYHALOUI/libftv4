/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:01:19 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/22 11:56:48 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*dst;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(dst = malloc(sizeof(char) * 1)))
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (!(dst = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
