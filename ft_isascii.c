/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:25 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 10:24:53 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Function checks if 'C' is 7-bit unsigned char that fits 
    within the ASCII character set.
*/

int    ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}