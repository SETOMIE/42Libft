/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:41 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 10:44:56 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Function fills the first n bytes of a memory area 
    (pointed to by s) with constant byte C.
*/

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char    *p;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}