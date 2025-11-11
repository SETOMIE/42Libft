/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:25:02 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/11 12:41:28 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    DESCRIPTION : Writes the character c on file descriptor.
    
	RETURN VALUE : None.
*/

#include "libft.h"

/*
	DESCRIPTION : Outputs character 'c' to given file descriptor.
	
	RETURN VALUE :
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return (0);
}

/*
1st para is file descriptor.
2nd para is address of the char.
*/