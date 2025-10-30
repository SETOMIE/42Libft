/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyeo <asyeo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 08:24:49 by asyeo             #+#    #+#             */
/*   Updated: 2025/10/30 09:42:17 by asyeo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t    ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t    dest_len;
    size_t    src_len;
    size_t    i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (n <= dest_len)
        return (n + src_len);
    i = 0;
    while (src[i] != '\0' && (dest_len + i) < (n - 1))
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}