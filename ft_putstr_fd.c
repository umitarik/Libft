/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:08:37 by uarik             #+#    #+#             */
/*   Updated: 2023/07/11 09:36:47 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return ;
}
//#include <fcntl.h>
//#include <stdio.h>
//int main()
//{
//	int fd;
//	fd = open("/Users/uarik/Desktop/amet.txt", O_RDWR | O_CREAT , 0777);
//	ft_putendl_fd("bebis",fd);
//	close(fd);
//}
