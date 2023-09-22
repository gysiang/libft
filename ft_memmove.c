/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:08:47 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/21 15:05:20 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*temp;

	if (src == NULL && dest == NULL)
		return (NULL);
	temp = (char *)dest;
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			temp[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			temp[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
