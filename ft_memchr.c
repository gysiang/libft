/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:34:27 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/14 11:29:13 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*str_char;

	str_char = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (str_char[i] == (unsigned char)c)
		{
			return ((void *)(str_char + i));
		}
		i++;
	}
	return (NULL);
}
