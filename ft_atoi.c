/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:42:43 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 20:01:09 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	container;

	i = 0;
	sign = 1;
	container = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (!(ft_isdigit(nptr[i])))
			return (container * sign);
		else
			container = container * 10 + (const char ) nptr[i] - '0';
		i++;
	}
	return (container * sign);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("-123"));
}
