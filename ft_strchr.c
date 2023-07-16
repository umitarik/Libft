/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:09:39 by uarik             #+#    #+#             */
/*   Updated: 2023/07/11 15:07:46 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (unsigned char)c)
			return (&((char *)s)[counter]);
		counter++;
	}
	if ((unsigned char)c == s[counter])
		return (&((char *)s)[counter]);
	return (NULL);
}
#include <stdio.h>
int main()
{
	char str[20] = "Hello World";
	printf("%s\n", ft_strchr(str, 'W'));
}
