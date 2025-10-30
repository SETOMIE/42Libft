/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:56 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:42:25 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Function calculates the string's length pointed to by s, 
    excluding NULL or '\0'.
    
	RETURN VALUE :
*/

size_t    ft_strlen(const char *s)
{
    size_t    len;

    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return (l);
}

/*int    main(void)
{
    char    str[] = "Jeff the Landshark!";
    printf("Length of '%s' is: %zu\n", str, ft_strlen(str));
    return (0);
}*/