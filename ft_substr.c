/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:22:53 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 23:26:15 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = (char *) malloc(len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s + start, len);
	s2[len] = '\0';
	return (s2);
}
