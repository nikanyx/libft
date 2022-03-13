/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:14 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/13 00:26:17 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_del(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
		if (*s++ == c && *s != c && *s)
			i++;
	return (i);
}

static void	new_strs(char const *s, char c, char **new)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		if (s[i] && s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				j++;
				i++;
			}
			new[k++] = ft_substr(s, i - j, j);
		}
		else
			i++;
	}
	new[k] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = (char **) malloc(sizeof(char **) * num_del(s, c));
	if (!new)
		return (NULL);
	new_strs(s, c, new);
	return (new);
}
