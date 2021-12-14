/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:13:56 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 19:13:57 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*put_in_str(int j, int i, long nb)
{
	char	*str;

	if (nb < 0)
		str = malloc(sizeof (char) * (i + 2));
	else
		str = malloc(sizeof (char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (j > 0)
	{
		if (nb < 0)
		{
			str[0] = '-';
			i = 1;
			nb *= -1;
		}
		str[i] = ((nb / j) + 48);
		nb -= ((nb / j) * j);
		j /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		j;
	int		i;
	long	tmp;
	long	nb;

	i = 1;
	j = 1;
	nb = n;
	tmp = nb;
	if (tmp < 0)
		tmp *= -1;
	while (tmp > 9)
	{
		tmp = tmp / 10;
		j *= 10;
		i++;
	}
	return (put_in_str(j, i, nb));
}
