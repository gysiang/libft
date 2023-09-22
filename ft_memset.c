/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:40:41 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/20 16:00:01 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (!s)
	{
		*((char *)0) = c;
	}
	p = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		*(p + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>

int main(void)
{
	char data[27];
	for (int i=0; i < 26; ++i)
	{
		data[i] = 65+i;
	}
	ft_memset(data,65, 13);
	data[26] = '\0'; // Null-terminate the string
	printf("ft_memset result: %s\n", data);
	memset(data,65, 13);
	data[26] = '\0'; // Null-terminate the string
	printf("memset result: %s\n", data);

	return (0);
} */
