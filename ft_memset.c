/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:40:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/22 16:54:43 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	if (!s)
	{
		*p = 'x';
		return (NULL);
	}
	p = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
