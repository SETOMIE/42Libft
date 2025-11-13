/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:03:11 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/13 07:19:00 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : The function ft_strnstr locates the first occurrence of 
	the null-terminated string 'needle' in the string 'haystack', where not 
	more than 'len' characters are searched. Characters that appear after a 
	'\0' character are not searched.

	RETURN VALUE : A pointer to the first occurrence of 'needle' in 'haystack';
	NULL if 'needle' is not found. If 'needle' is an empty string, 
	'haystack' is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}