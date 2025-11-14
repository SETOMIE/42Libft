/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:06:42 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 15:24:15 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION : Function allocates with malloc and returns a new string,
    which is the concatenated from 's1' and 's2'.
    
	RETURN VALUE : Returns the new string; NULL is malloc fails.
*/

#include "libft.h"
//#include <stdio.h>

char	ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	i;
	char	j;

	i = 0;
	j = 0;
	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}

char	ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (s1 && s2 == '\0')
		return (0);
	str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	return (str);
}

/*
int	main(void)
{
	
}
*/

/* NOTES:

*/