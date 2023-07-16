/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:10:43 by uarik             #+#    #+#             */
/*   Updated: 2023/07/11 16:44:16 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}
#include <stdio.h>
void	ft_42(unsigned int i, char *c)
{
	*c = ft_tolower(*c);
}
#include <stdio.h>
int main()
{
	char str[] = "Hello World";
	ft_striteri(str, ft_42);
	printf("%s\n", str);
}

