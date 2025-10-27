/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:56 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/27 14:05:35 by asyeo            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

/*
    DESCRIPTION:

*/

int     ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

/*int   main(void)
{
    char str[] = "Input"
    int len = ft_strlen(str);
    printf("Length of string is: %d\n", len);
    return (0);
}*/