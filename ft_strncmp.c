/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:57:02 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/12 23:33:21 by cmachado         ###   ########.fr       */
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
			diff = (unsigned char) s1[i] - (unsigned char) s2[i];
	}
	return (diff);
}
