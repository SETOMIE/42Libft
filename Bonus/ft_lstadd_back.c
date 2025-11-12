/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:22 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:39:26 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION : Adds a 'new' node to end of list.
    
	RETURN VALUE :
*/

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *temp;

    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    temp = *lst;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new;
}
