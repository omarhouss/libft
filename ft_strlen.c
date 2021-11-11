/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:54:43 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 21:48:56 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t    ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}
/*
int main()
{
    char test[]="omar";
    printf("%zu",ft_strlen(test));
}
*/