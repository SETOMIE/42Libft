/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:32 by asyeo             #+#    #+#             */
/*   Updated: 2025/11/13 07:26:23 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION : Iterates 'lst' list and applies 'f' function to 
	each node content.
	
	RETURN VALUE :
*/

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	while (lst != '\0')
	{
		f(lst->content);
		lst = lst->next;
		return (0);
	}
}
