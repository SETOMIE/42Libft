/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:19 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:36:20 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function checks for an alphanumeric character.
    
    RETURN VALUE :
*/

int    ft_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) 
        || (c >= 48 && c <= 57))
        return (1);
    else
        return (0);
}