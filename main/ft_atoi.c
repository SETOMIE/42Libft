/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:19:23 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/27 10:30:00 by asyeo            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_atoi(char *str)
{
    int     i;
    int     sign;
    int     result;

    i = 0;
    sign = 1;
    result = 0;
    while (str [i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
    {
        i++;
    }
    while (str[i] && (str[i] == '-' || str[i] == '+'))
    {
        if (str[i] == '-')
        sign *= -1;
        {
            i++;
        }
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = (result * 10) + str[i] - '0';
        i++;
    }
    return  (result * sign);
}

/*int     main(void)
{
    char    *str;

    str = " ---+--+1234ab567";
    printf("%d\n",(ft_atoi(str)));
}*/