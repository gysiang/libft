/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:04:13 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/19 10:27:06 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)haystack);
	while (*haystack != '\0' && n >= i)
	{
		if (ft_strncmp(haystack, needle, i) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		n--;
	}
	return (NULL);
}
