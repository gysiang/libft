/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyong-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:31:39 by gyong-si          #+#    #+#             */
/*   Updated: 2023/09/15 16:20:00 by gyong-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end - 1], set))
		end--;
	result = (char *)malloc((end - start) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while ((end - start) > i)
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main() {
    char s1[] = " lorem ipsum dolor sit amet";
    char *strtrim = ft_strtrim(s1, "l ");

    if (strtrim) {
        printf("Trimmed String: %s\n", strtrim);
        free(strtrim);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
