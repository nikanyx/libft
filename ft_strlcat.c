/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:17 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/14 22:03:56 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	result;
	size_t	i;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	src_size = ft_strlen(src);
	result = src_size + i;
	if (!dst[i])
		while (*src && (i + 1 < dstsize))
			dst[i++] = *src++;
	else
		while (i + 1 < dstsize)
			i++;
	if (dstsize != 0 && i < dstsize)
		dst[i] = '\0';
	return (result);
}
