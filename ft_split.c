/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:14 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/15 20:02:38 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delim(char const *s, char c)
{
	int	i;

	i = 1;
	while (*s)
		if (*s++ == c && *s != c && *s)
			i++;
	return (i + 1);
}

static char	*cpy_str(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = (char *) malloc(len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s + start, len);
	s2[len] = '\0';
	return (s2);
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
			new[k++] = cpy_str(s, i - j, j);
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
	new = (char **) malloc(sizeof(char **) * delim(s, c));
	if (!new)
		return (NULL);
	new_strs(s, c, new);
	return (new);
}
