/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:49:07 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 23:35:46 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		lesns1;
	char	*tr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	tr = (char *)s1;
	lesns1 = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_checkset(s1[i], set))
		i++;
	while (lesns1 > 0 && ft_checkset(s1[lesns1], set))
		lesns1--;
	tr = ft_substr(s1, i, (lesns1 - i + 1));
	return (tr);
}
/*
int main()
{
    char const s1[] = "hyhyhy";
    char const set[]  = "hy";
    char *new;
    new = ft_strtrim(s1,set);
    printf("%s",new); 
}
*/
