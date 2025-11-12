/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:07:03 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/07 17:32:43 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION : Mallocs and returns an array of strings obtained from 
	splitting s with char c (used as delimiter).
    
	RETURN VALUE : Array of strings from splitting s; NULL if malloc fails.
*/

#include "libft.h"

char	ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (0);
	str = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			str[j++] = ft_substr(s, start, i - start);
	}
	return (str);
}