/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:30 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:39:48 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Takes as node parameter and frees node content memory using the
    'del' function as a parameter. Memory of 'next' must not be freed.
    
	RETURN VALUE :
*/

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    
}