/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:39:10 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/09 16:50:34 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
	{
		return (0);
	}
	while((unsigned char)*s1 == (unsigned char)*s2 && s1 != '\0' && n-1 > 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
