/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:58 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/27 14:05:35 by asyeo            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;

    i = 0;
    if (n == '\0')
        return (0);
    
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        if (s1[i] == '\0')
            i = i + 1;
    }
    return (s1[i] - s2[i]);
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