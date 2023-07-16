/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:05:54 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 23:04:13 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c1;
	size_t	c2;

	c1 = 0;
	c2 = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		((unsigned char *)dest)[c1++] = ((char *)src)[c2++];
	return (dest);
}
#include <stdio.h>
int main()
{
	char src[10] = "hello";
	char dest[10];

	printf("%s",ft_memcpy(dest,src,3));
}
