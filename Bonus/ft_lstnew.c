/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:39 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 11:46:36 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Allocates with malloc and returns a new node.
    'conent' member variable is initialized with value of 'content' parameter. 
    Variable 'next' is NULLified.
*/

t_list  ft_lstnew(void *content)
{
    t_list  *new_node;

    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
