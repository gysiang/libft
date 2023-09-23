/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:48:30 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/23 20:08:49 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *src, unsigned int start, size_t size)
{
	char		*result;
	size_t		copy_len;
	size_t		src_len;

	if (!src)
		return (NULL);
	src_len = ft_strlen(src);
	if (start >= src_len)
		return (ft_strdup(""));
	else if (size > src_len - start)
		size = src_len - start;
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	copy_len = size;
	if (copy_len >= size)
		copy_len = size;
	ft_strlcpy(result, src + start, copy_len + 1);
	return (result);
}
