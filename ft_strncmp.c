/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:57:02 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:58:06 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0') && diff == 0 && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			diff = s1[i] - s2[i];
	}
	return (diff);
}
