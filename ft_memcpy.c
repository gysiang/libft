/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:08:14 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/21 14:47:50 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*src_char;
	char			*dest_char;

	if (src == NULL && dest == NULL)
		return (dest);
	src_char = (char *)src;
	dest_char = (char *)dest;
	i = 0;
	while (n > i)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	const char src[15] = "www.google.com";
	char dest[15];
	
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy = %s\n", dest);
} */
