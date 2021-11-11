/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:35:24 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 21:40:24 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    if (dstsize > 0)
    {
        while (src[i] && i < (dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
	while (src[i])
		i++;
	return (i);

}
/*
int main()
{
    char d[]= "omar";
    char s[]="hous";
    printf("%d",ft_strlcpy(d,s,sizeof(d)));
}
*/
