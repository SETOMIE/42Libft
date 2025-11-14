/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:06 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 14:44:14 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function erases the data in the n bytes of the location 
	memory pointed to by *s by writing '0's to the area.
	
	RETURN VALUE : None.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	ptr;

	ptr = (char *) s;
	while (n != 0)
	{
		ptr = 0;
		s++;
	}
	//return (0);
}

/*
int	main(void)
{
	
}
*/

/*NOTES:
1) Alternatively can be written as ft_memset(s, 0, n);
*/