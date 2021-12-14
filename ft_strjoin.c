/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:56:38 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 22:12:52 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*re;
	size_t	s1line;
	size_t	tline;

	if (!s1 || !s2)
		return (NULL);
	s1line = ft_strlen(s1) + 1;
	tline = s1line + ft_strlen(s2);
	re = (char *)malloc (sizeof(char) * tline);
	if (!re)
		return (NULL);
	ft_strlcpy(re, s1, s1line);
	ft_strlcat(re, s2, tline);
	return (re);
}
