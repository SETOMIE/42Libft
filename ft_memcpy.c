/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:36 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/06 11:11:33 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION: Function copies n bytes from src (source) to dest (destination).
	
	VISUALS: Pouring water from Cup A into empty Cup C.
	
	RETURN VALUE: DEST VALUE.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i; //i can only be positive or 0.

	i = 0;
	if (!dest && !src) //if dest & src = NULL
		return (0);
	if (n == 0 || (dest != src))
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i]; //?
			i++;
		}
	}
	return (dest);
}
