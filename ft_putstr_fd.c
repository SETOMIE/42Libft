/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:08:05 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 11:59:12 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Outputs string 's' to given file descriptor.
*/

void    ft_putstr_fd(char *s, int fd)
{
    int     i;
    i = 0;
    
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

/*
int     main(void)
{
    char *str = "Jeffy Jefferson"
    ft_purstr_fd(str);
    return (0);
}
*/