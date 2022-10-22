/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:05:11 by ahaloui           #+#    #+#             */
/*   Updated: 2022/10/21 20:21:28 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int calcule(long n)
{
    int i;

    i = 0;
	if (n < 0)
    {
        n *= -1;
		i = 1;
    }
    while (n != 0)
    {
        i++;
        n /= 10;
    }
    return (i);
}

/*char *strrev(char *str)
{
    char *new;
    int i;
    size_t len;
    
    i = 0;
    len = (ft_strlen(str) - 1);
    new = (char *)malloc(sizeof(char) * (len + 2));
    while (len >= 0)
    {
        new[i] = str[len];
        i++;
        len--;
    }
    new[i] = '\0';
    return (new);
}*/

/*char    *reverse(char *str)
{   
	int		len;
	int 	i;
	char	temp;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	len--;
	printf("%d\n", len);	
	while (i <=  (len / 2))
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;	
	}
	str[i] = '\0';
	return (str);
} */   


char    *ft_itoa(int n)
{
    char    *new = NULL;
    int     len;
    long    n1;

    if (n == 0)
        return ("0");    
    n1 = (long)n;
    len = calcule(n1) + 1;
    //ft_strdup(new);
    new = (char *)malloc(len * sizeof(char));
    if(!new)
        return (NULL);
    if (n1 < 0)
    {
        new[0] = '-';
        n1 *= -1;
    }
    new[len - 1] = '\0';
	while (n1 != 0)
	{
		new[--len - 1] = (n1 % 10) + '0';
		n1 /= 10;
	}
	return (new);
}




/*int main()
{
	char name[] = "aymene";
	
    printf("{%s}\n", ft_itoa(-214));
	// printf("%d", reverse(name));
    return (0);
}*/