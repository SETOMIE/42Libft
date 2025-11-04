/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:25:02 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/04 11:17:32 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
