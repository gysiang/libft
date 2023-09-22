/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:20:53 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/13 16:31:47 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/*
int main(void)
{
    char src[] = "World";
    char dest[] = "Hello";

    printf("%zu, %s\n", ft_strlcpy(dest, src, 10), dest);
    printf("%zu, %s\n", ft_strlcpy(dest, src, 5), dest);
    printf("%zu, %s\n", ft_strlcpy(dest, src, 1), dest);

    return (0);
} */
