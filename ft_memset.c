/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:41 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/06 10:54:52 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function fills a block of memory with a particular value.
	
	RETURN VALUE : Returns a pointer to memory area s.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n) //can be (n--)
	{
		str[i] = c; //can be str[i++]
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	
}
*/
