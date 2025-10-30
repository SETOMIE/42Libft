/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:33 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 11:02:08 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function checks for any printable characters (including space).
    
	RETURN VALUE : Non-zero if c is a printable character, otherwise 0.
*/

int    ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (c);
    return (0);
}