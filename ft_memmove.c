/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:39 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/13 14:20:15 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function copies n bytes from src to a temporary array 
	(that does not overlap with src and dest) which are then copied to dest.
	
	RETURN VALUE : ORIGINAL DEST VALUE.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dptr;
	const char	*sptr;
	ahjsjdbhad 	len;

	if (!dest && !src)
		return (0);
	dptr = (char *)dest;
	sptr = (const char *)src;
	if (sptr < dptr && sptr + len > dptr)
		while (len--)
			*(dptr + len) = *(sptr + len);
	else
	{
		while (len--)
		{
			*dptr = *sptr;
			sptr++;
			dptr++;
		}
	}
}
