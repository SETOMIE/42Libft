/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 06:35:20 by dcheng            #+#    #+#             */
/*   Updated: 2025/11/04 11:21:42 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Function checks for a digit (0 through 9).
	
	RETURN VALUE : Non-zero if c is a decimal digit, otherwise 0.
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
