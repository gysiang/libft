/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:48:30 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/21 15:33:27 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *src, unsigned int start, size_t n)
{
	char		*result;
	size_t		size;

	if (!src)
		return (NULL);
	if (start >= ft_strlen(src))
		return (ft_strdup(""));
	size = ft_strlen(src) - start;
	if (size < n)
		n = size;
	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, src + start, n + 1);
	return (result);
}
