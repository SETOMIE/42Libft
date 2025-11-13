/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:19 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/13 08:11:53 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function checks for an alphanumeric character.
    
    RETURN VALUE : 
*/

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/* NOTES:
1) Can be alternatively written as return (ft_islapha(c) || ft_isdigit(c));

2) Alphanumericals cover both alphabetical and numerical ASCII values.

3) '||' is OR operator, and looks for true. If first arg is false, it tests the 
second. If both args are false, then false; otherwise true.
*/
