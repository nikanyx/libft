/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:02:17 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 17:29:29 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*int	main(void)
{
	char	a[10] = "hello";
	char	b[10] = " world";
	int		result;

	result = ft_strlcat(a, b, 8);
	printf("my str: %s\n", a);
	printf("my ret: %d\n", result);
}*/