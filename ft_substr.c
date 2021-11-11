/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 05:29:08 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/11 06:23:04 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t  i;
    char    *sub;

    if (!s)
        return (NULL);
    i = 0;
    sub = malloc(len + 1);
    if (!sub)
        return (NULL);
    while (i < len && (i + start) < ft_strlen(s))
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}