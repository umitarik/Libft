/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:07:49 by uarik             #+#    #+#             */
/*   Updated: 2023/07/11 09:38:46 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
#include <fcntl.h>

 int main()
 {
 	int fd = open("/Users/uarik/Desktop/nes.txt", O_RDWR | O_CREAT , 0777);
 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
 }

// Belirtilen dosya tanımlayıcısına (fd) "c" parametresinden gelen
 //karakteri yazar.
