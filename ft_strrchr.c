/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:25:01 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/13 11:34:12 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION : The function locates the LAST occurrence of character c 
	in string str.

	RETURN VALUE : A pointer to the last location of chr in str if found,
	NULL if chr is not found.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
