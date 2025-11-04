/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 09:20:37 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/29 11:35:38 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    DESCRIPTION: Iterates 'lst' list and applies 'f' function on each node 
    content. Creates a list of succesful 'f' function applications.
    'del' function deletes node content (if needed).
*/

t_list      ft_lstmap(t_list *lst, void (*f)(void*), void (*del)(void*))
{
    
}