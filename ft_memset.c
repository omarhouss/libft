/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:27:45 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 21:31:09 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memset(void *b, int c, size_t len)
{
    size_t  k;
    unsigned char    *p;

    k = 0;
    p = (unsigned char *)b;
    while (k < len)
    {
        p[k] = c;
        k++;   
    }
    return  (p);
    
}
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}*/

