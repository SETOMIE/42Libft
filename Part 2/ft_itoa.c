/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:07:12 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/14 15:37:52 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
//#include <stdio.h>

static	int int_len(long nbr);
static	char *pre_conv(int len);

char	ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = n;
	len = int_len(num);
	if (n < 0)
	{
		num = -num;
		len++;
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
int	main(void)
{
	
}
*/