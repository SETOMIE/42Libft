/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:10 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 14:44:18 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (tmp == '\0')
		return (0);
	while (i < count * size)
		tmp[i++] = 0;
	return (tmp);
}

/*
int	main(void)
{
	
}
*/

/*NOTES:

1) * in (count * size) is used to multiply count and size's values.
*/
