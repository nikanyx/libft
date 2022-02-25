/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:50:08 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:54:23 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	fix;

	fix = len;
	if (src < dst)
		while (--len)
			((char *)dst)[len] = ((char *)src)[len];
	else
		while (--len)
			*(char *)dst++ = *(char *)src++;
	return (dst - (fix - 1));
}
