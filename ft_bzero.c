/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:43:28 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 20:07:22 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*arr;

	arr = (char *)s;
	while (n > 0)
	{
		*arr = 0;
		arr++;
		n--;
	}
}
#include <stdio.h>
int main()
{
	char s[10] ="hello";
	ft_bzero(s,2);
	printf("%s",s + 2);
}
