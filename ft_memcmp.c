/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:18:42 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 16:52:51 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	return (0);
}

/*int	main(void)
{
	const char	src[20] = "Hello pessoal";
	const char	src2[20] = "Hello world";

	printf("%d\n", ft_memcmp(src, src2, 21));
}*/