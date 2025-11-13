/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:56 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/07 16:27:36 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function calculates the string's length pointed to by s, 
	excluding NULL or '\0'.
	
	RETURN VALUE : The number of bytes in the string str.
*/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	return (i);
}

/*int    main(void)
{
	char    str[] = "Jeff the Lands/0hark!";
	printf("Length of '%s' is: %zu\n", str, ft_strlen(str));
	return (0);
}*/