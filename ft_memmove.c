/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:15:01 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 22:43:20 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;

    i = 0;
    if(dst > src)
    {
        while (len > 0)
        {
            ((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
            len--;
        }
    }
    if (dst == src)
    {
      return (dst);
    } 
    else
    {
        while (i < len)
        { 
            ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
            i++;
        }    
    }
    return (dst);
}
/*
int main ()
{
  char str1[] = "omar"; 
  char str2[] = "hou"; 
 
  puts("str1 before memcpy ");
  puts(str1);
  ft_memmove (str1, str2, sizeof(str2));
  puts("str1 after memcpy ");
  puts(str1);
  return 0;
}
*/