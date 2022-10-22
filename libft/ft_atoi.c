/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:22:33 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/22 09:22:31 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_atoi(const char *str)
{
    int i;
    long long result;
    long long last;
    int sign;

    last = 0;
    i = 0;
    result = 0;
    sign = 1;
    while (str[i] && (str[i] == 32 || str[i] == '\n' || str[i] == '\t'
        || str[i] == '\v' || str[i] == '\r' || str[i] == '\f'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = (result * 10) + (str[i++] - '0');
        if (result < last)
        {
            if (sign == 1)
                return (-1);
            else
                return (0);
        }
        last = result;
    }
    return (result * sign);
}