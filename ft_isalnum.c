/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:38:46 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 22:51:56 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if(c >= '0'&& c <= '9')
    {
        return (1);
    }
    if(c >= 'a'&& c <= 'z')
    {
        return (1);
    }
    if(c >= 'A'&& c <= 'Z')
    {
        return (1);
    }
    return (0);
}