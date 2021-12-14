/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:25:50 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/28 05:03:28 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if ((size == 0 && !dst) || size == 0q)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (src_len + size);
	while (src[i] && (i + dst_len) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (size > dst_len)
		return (src_len + dst_len);
	else
		return (src_len + size);
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
