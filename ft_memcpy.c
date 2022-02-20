/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:58:52 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 17:27:11 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n-- > 0)
		*(char *)dst++ = *(char *)src++;
	return (dst);
}

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[12] = "Hello world";

	printf("orig. string: %s\n", dest);
	ft_memcpy(dest, src, 5);
	printf("after memcpy: %s\n", dest);
}*/