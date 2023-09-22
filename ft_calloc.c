/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:10:19 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/14 15:15:12 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t		total_size;
	size_t		i;
	char		*p;

	total_size = nitems * size;
	i = 0;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	while (total_size > i)
	{
		p[i] = '\0';
		i++;
	}
	return ((void *)p);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	n;
	int	*a;

	printf("Number of elements to be entered:");
	scanf("%d", &n);

	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	for (i=0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The numbers entered are: ");
	for (i=0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
	return (0);
} */
