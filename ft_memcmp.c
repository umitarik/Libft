/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:05:27 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 23:01:45 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*container1;
	unsigned const char	*container2;

	container1 = (unsigned char *)s1;
	container2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*container1 != *container2)
			return (*container1 - *container2);
		n--;
		container1++;
		container2++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char s[10] = "aello";
	char c[10] = "bord";

	printf("%d",ft_memcmp(s,c,3));
}
