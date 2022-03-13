/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:22:53 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/13 00:25:42 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
	{
		start = slen;
		len = 0;
	}
	if (len > slen)
		len = slen;
	s2 = (char *) malloc(len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s + start, len);
	s2[len] = '\0';
	return (s2);
}
