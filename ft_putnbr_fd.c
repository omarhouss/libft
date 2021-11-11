/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 05:00:45 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/11 05:06:37 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_putnbr_fd(int    n, int  fd)
{
    unsigned int    res;

    res = 0;
    if (n < 0)
    {
        ft_putchar_fd('-',fd);
        res = -((unsigned int)n);
    }
    else
        res = n;
    if (res < 10)
    {
        ft_putchar_fd(res + 48, fd);
    }
    else
    {
        ft_putnbr_fd(res / 10, fd);
        ft_putchar_fd((res % 10) + 48, fd);
    }
}