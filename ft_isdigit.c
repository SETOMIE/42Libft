/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 06:35:20 by dcheng            #+#    #+#             */
/*   Updated: 2025/10/29 10:16:03 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION: Function checks for a digit (0 through 9).
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9');
		return (1);
	else
		return (0);
}
