/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:33:53 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/10 22:59:22 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *	ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while(i >= 0)
	{
		if (s[i] == c)
        {
            return ((char*)(s+i));
        }
        i--;
	}
	return (0);
}
/*
int main()
{
	char test[] = "This is a test";
	printf("%s",ft_strrchr(test,'s'));

}
*/
