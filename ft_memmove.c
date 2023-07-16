/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:06:26 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 23:55:10 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			counter;

	if (!dest && !src)
		return (NULL);
	buffer1 = (unsigned char *)dest;
	buffer2 = (unsigned char *)src;
	counter = 0;
	if (buffer1 > buffer2)
	{
		while (n-- > 0)
			buffer1[n] = buffer2[n];
	}
	else
	{
		while (n > counter)
		{
			buffer1[counter] = buffer2[counter];
			counter++;
		}
	}
	return (dest);
}
#include <stdio.h>

int main()
{
	char src[10] = "42kocaeli";

	char dest[10];

	printf("%s",ft_memmove(src+2,src,8));
}
