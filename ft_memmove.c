/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:50:08 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/16 16:12:56 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[12] = "Hello world";

	printf("orig. string: %s, %s\n", dest, src);
	ft_memmove(dest, src, 13);
	printf("after memcpy: %s, %s\n", dest, src);
}*/