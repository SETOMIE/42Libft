/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:36 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 15:31:03 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION: Function copies n bytes from src (source) to dest (destination).
	
	VISUALS: Pouring water from Cup A into empty Cup C.
	
	RETURN VALUE: DEST VALUE.
*/

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*t_dst;
	const unsigned char		*t_src;

	if (!dest && !src)
		return (0);
	if (n == 0 || (dest == src))
		return (dest);
	t_dst = (unsigned char *) dest;
	t_src = (const unsigned char *) src;
	while (n != 0)
	{
		if (*t_dst != *t_src)
			*t_dst = *t_src;
		t_dst++;
		t_src++;
		n --;
	}
	return (dest);
}

/*
int	main(void)
{
	
}
*/

/*NOTES:
1) t_dst is temporary destination. t_src is temporary source.
*/