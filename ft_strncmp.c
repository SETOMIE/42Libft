/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:58 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/04 12:22:50 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function converts lowercase characters to uppercase.

	RETURN VALUE : Uppercase equivalent characters.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*int     main(void)
{
	char    str1[] =
	char    str2[] =
	char    str3[] =

	printf("%d\n", ft_strncmp(str1, str2, 2));
	printf("%d", ft_strncmp(str2, str3, 2));
	return (0);
}*/