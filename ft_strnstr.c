/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:58:58 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/11 03:54:07 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
   size_t   i;
   size_t   j;

   i = 0;
   if(!haystack && !len && needle)
   {
       return (NULL);
   }       
   if(!needle[0])
   {
       return (char *)(haystack);
   }
   while (haystack[i] && len > i)
   {
       j = 0;
       while (haystack[i + j] == needle[j] && needle[j])
       {
           j++;
       }
       if (needle[j] == '\0' && (i+j) <= len)
       {
           return (char *)(haystack +i);
       }
       i++;
   }
   return (NULL);
}
/*
int main()
{
    char a[] = "123456testsdhgksbv";
    char b[] = "test";
    printf("%s", ft_strnstr(a, b, 9));
}
*/
