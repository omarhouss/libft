/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 07:43:32 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 05:01:44 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = (char *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	while (count * size > i)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
/*
int main()
{
    char *p = ft_calloc(2,3);
    printf("%s",p);
    free(p);
}
*/
