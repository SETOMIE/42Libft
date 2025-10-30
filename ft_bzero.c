/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:06 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 07:50:04 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function erases the data in the n bytes of the location 
    memory pointed to by *s by writing '0's to the area.
    
    RETURN VALUE : None.
*/

void    ft_bzero(void *s, size_t n)
{
    size_t            i;
    unsigned char    *ptr;

    ptr = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

