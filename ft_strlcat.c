/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:49 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/15 11:59:24 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	Function will 'chain together' two strings.
	Note : space for the terminating '\0' character must be included in dstsize.

	RETURN VALUE :
	The total length of the string that it tried to create : the initial
	length of dst + the length of src, with the goal to facilitate
	truncaction detection.
*/

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size == dstlen)
		return (dstlen + srclen);
	while (src[i] != '\0' && (dstlen + 1) < size)
	{
		dest[dstlen] = src[i];
		dstlen++;
		i++;
	}
	dest[dstlen] = '\0';
	return (dstlen + srclen);
}

/* 
int	main(void)
{
	const char *s = "Jeff the Shark"; //14
	const char *d = "Gotham kinda stinks"; //19
	
	printf("%s\n", d);
	ft_strlcat(d, s, 33)
	printf("%s\n", d);
	return (0);
}
*/