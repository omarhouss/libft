/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:56:06 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 21:54:35 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s,0,n);
}
/*
int main( void )
  {
    char s[11] = "Hello World";
    ft_bzero(s+4,4);
    printf("%s",s);
}
*/