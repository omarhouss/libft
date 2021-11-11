/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:50 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 23:59:15 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t des_len;
    size_t src_len;

    des_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    j = des_len;
    if (des_len < size - 1 && size > 0)
    {
        while (src[i] && des_len + i < size + 1 )
        {
            dst[j++] = src[i++];
        }
        dst[j] = 0;
    }
	if (des_len >= size)
		des_len = size;
	return (des_len + src_len);
    
}
/*
int main()
{
    // Chaîne contenant le début et la chaîne finale
    char debut[] = "Hello ";
    // Chaîne contenant la seconde partie
    char fin[] = "world !";
    // Concaténation
    ft_strlcat (debut, fin,20);
    // Affichage du résulat
    printf ("%s", debut);    

    return 0;
}
*/
