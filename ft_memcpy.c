/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:45:10 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 22:32:11 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;
    if (dst == src)
    {
      return (dst);
    }
    i = 0;
    while (i < n)
    {
      ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
      i++;
    }
    return (dst);

}
/*
int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "Quiz"; 
 
  puts("str1 before memcpy ");
  puts(str1);
  ft_memcpy (str1, str2, sizeof(str2));
  puts("str1 after memcpy ");
  puts(str1);
  return 0;
}
*/
