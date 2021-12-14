/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:27:45 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/28 04:43:44 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			k;
	unsigned char	*p;

	k = 0;
	p = (unsigned char *)b;
	while (k < len)
	{
		p[k] = c;
		k++;
	}
	return (p);
}
/*
int main()
{
    int str[5] = {0, 1, 2, 4};
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 8*sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}*/
