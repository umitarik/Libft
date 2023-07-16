/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:07:27 by uarik             #+#    #+#             */
/*   Updated: 2023/07/11 17:00:21 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
 #include <fcntl.h>
#include <stdio.h>

 int main()
 {
	//int	fd2 = open("test2.txt",O_RDWR | O_CREAT , 0777);
	int fd = open("/Users/uarik/Desktop/test.txt",O_RDWR | O_CREAT , 0777);
	printf("%d\n", fd);
	ft_putchar_fd('S',fd);
	close(fd);
 }
