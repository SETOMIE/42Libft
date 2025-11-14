/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:39 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 14:44:54 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function copies n bytes from src to a temporary array 
	(that does not overlap with src and dest) which are then copied to dest.
	
	RETURN VALUE : ORIGINAL DEST VALUE.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*t_dst;
	const char	*t_src;
	size_t		len;

	len = 0;
	if (!dest && !src)
		return (0);
	t_dst = (char *)dest;
	t_src = (const char *)src;
	if (t_src < t_dst && t_src + len > t_dst)
		while (len--)
			*(t_dst + len) = *(t_src + len);
	else
	{
		while (len--)
		{
			*t_dst = *t_src;
			t_dst++;
			t_src++;
		}
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