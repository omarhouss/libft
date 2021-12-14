/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:14:28 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 21:57:08 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*re;
	size_t	i;

	i = 0;
	re = (char *)malloc(sizeof(const char) *(ft_strlen(s1) + 1));
	if (re == NULL)
		return (NULL);
	while (s1[i])
	{
		re[i] = s1[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}
