/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:42 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 11:41:35 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Returns the last node of the list.
*/

int     ft_lstsize(t_list *lst)
{
    size_t  count;

    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}
