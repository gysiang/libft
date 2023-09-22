/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:54:36 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/13 17:21:40 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_length;
	size_t	dst_length;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	dst_length = j;
	src_length = ft_strlen(src);
	if (size == 0 || size <= dst_length)
	{
		return (src_length + size);
	}
	while (src[i] != '\0' && i < size - dst_length -1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst_length + src_length);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Born to code";
	char dest[] = "1337 42 ";
	printf("%zu \n", ft_strlcat(dest, src, 21));
	printf("%s \n", dest); 
} */
