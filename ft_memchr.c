/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 00:05:45 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/11 00:35:39 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    i = 0;
    str = (char *)s;
    while(i < n)
    {
        if(((unsigned char *)str)[i] == (unsigned char)c)
        {
            return ((void *)(s + i));
        }
        i++;       
    }
    return (NULL);
}