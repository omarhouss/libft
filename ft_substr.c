/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 05:29:08 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 23:48:53 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	while (i < len && s[i + start])
		i++;
	sub = malloc(i + 1 * sizeof(char));
	if (!sub)
		return (NULL);
	while (i > j)
	{
		sub[j++] = s[start++];
	}
	sub[i] = '\0';
	return (sub);
}
