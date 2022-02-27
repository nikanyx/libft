/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:14 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/27 19:03:23 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_del(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
		if (*s++ == c)
			i++;
	i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	new = (char **) malloc(sizeof(char **) * num_del(s, c));
	if (!new)
		return (NULL);
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] != c)
		{
			j++;
			i++;
		}
		new[k++] = ft_substr(s, i - j, j);
		i++;
	}
	return (new);
}
