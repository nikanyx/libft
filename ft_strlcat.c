/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:17 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:56:48 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;
	size_t	dest_size;
	size_t	result;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	if (dstsize <= dest_size)
		result = src_size + dstsize;
	else
		result = dest_size + src_size;
	while (*src && (dest_size + 1 < dstsize))
	{
		dst[dest_size] = *src;
		src++;
		dest_size++;
	}
	dst[dest_size] = '\0';
	return (result);
}
