/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohoussai <ohoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:23:21 by ohoussai          #+#    #+#             */
/*   Updated: 2021/11/25 20:48:54 by ohoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main ()
{
    int fd;

    fd = open("file.txt",O_RDWR );
    ft_putchar_fd('c',fd);
    
}
*/
