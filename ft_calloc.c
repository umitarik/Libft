/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uarik <uarik@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:43:53 by uarik             #+#    #+#             */
/*   Updated: 2023/07/10 20:09:39 by uarik            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pntr;

	pntr = malloc(size * nmemb);
	if (!(pntr))
		return (NULL);
	ft_bzero(pntr, (nmemb * size));
	return (pntr);
}
#include <stdio.h>
int main()
{
	
}
