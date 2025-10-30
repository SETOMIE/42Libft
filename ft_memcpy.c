/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:36 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:40:33 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function copies n bytes from src (source) to dest (destination).
    
    VISUALS : Pouring water from Cup A into empty Cup C.
    
	RETURN VALUE :
*/

int    ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t            i;
    unsigned char    *d;
    const unsigned char    *s;

    if (dest == NULL && src == NULL)
        return (NULL);
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}