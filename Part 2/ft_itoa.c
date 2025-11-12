/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:07:12 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/07 17:33:54 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION : Mallocate and return an 'n' representing string. 
	Negative numbers must  be handled. 
    
	RETURN VALUE : String representing n; NULL if malloc fails.
*/

#include "libft.h"

/*
    DESCRIPTION : Allocates with malloc and returns string representative 
    of interger received as arguement.
    Negative number must be handled.
    
	RETURN VALUE :
*/

char    ft_itoa(int n)
{
    char    *str;
    long    num;
    size_t  len;

    num = n;
    len = num_len(num);
    if (n < 0)
    {
        num = -num;
        len++;
    }
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (0);
    str[len] = '\0';
    while (len--)
    {
        str[len] = (num % 10) + '0';
        num /= 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}