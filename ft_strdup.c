/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:42:48 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:55:38 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	s2 = (char *) malloc(size);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, size);
	return (s2);
}
