/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:19:51 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/08 21:20:32 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	index(char const *s1, char const *set, size_t i, int dir)
{
	size_t	j;

	j = 0;
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i += dir;
		}
		else
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	lens1;
	size_t	start;

	if (!s1 || !set)
	{
		new = ft_strdup(s1);
		return (new);
	}
	lens1 = ft_strlen(s1);
	start = index(s1, set, 0, 1);
	if (start == lens1)
		new = calloc(1, 1);
	else
		new = ft_substr(s1, start, index(s1, set, lens1 - 1, -1) - start + 1);
	return (new);
}