/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:41 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 14:44:58 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function fills a block of memory with a particular value.
	
	RETURN VALUE : Returns a pointer to memory area s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *) s;
	ch = (unsigned char) c;
	while (n > 0)
	{
		*ptr = ch;
		ptr++;
	}
	return (s)
}

/*
int	main(void)
{
	
}
*/