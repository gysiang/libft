/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:54:36 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/22 19:43:54 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_length;
	size_t	dst_length;

	i = 0;
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	if (size == 0 || size <= dst_length)
		return (src_length + size);
	while (src[i] != '\0' && i < size - dst_length -1)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	return (dst_length + src_length);
}
