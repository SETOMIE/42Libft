/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 06:17:43 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 15:26:00 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :  Function checks for an alpahabetical characters, both upper 
	and lowercase.
	
	RETURN VALUE : The alphabetical ASCII value.
*/

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	
}
*/