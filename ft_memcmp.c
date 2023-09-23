/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <gyongsi@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:29:22 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/22 20:50:26 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_char;
	const unsigned char	*str2_char;
	size_t				i;

	i = 0;
	str1_char = (const unsigned char *)str1;
	str2_char = (const unsigned char *)str2;
	while (i < n)
	{
		if (str1_char[i] > str2_char[i])
		{
			return (1);
		}
		else if (str1_char[i] < str2_char[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
