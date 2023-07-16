/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:12:33 by uarik             #+#    #+#             */
/*   Updated: 2023/07/09 15:44:08 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	leng;
	int	i;

	i = 0;
	leng = 0;
	while (s[i] != '\0')
	{
		leng++;
		i++;
	}
	return (leng);
}