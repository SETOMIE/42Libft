/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:39 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:40:29 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function copies n bytes from src to a temporary array 
    (that does not overlap with src and dest) which are then copied to dest.
    
    VISUAL : Cups A and C have water, Cup B is empty. Place water from Cup A 
    into Cup B, before moving the water to Cup C.
    
	RETURN VALUE :
*/

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t            i;
    unsigned char    *d;
    const unsigned char    *s;

    if (dest == NULL && src == NULL)
        return (NULL);
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d > s)
    {
        i = n;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}