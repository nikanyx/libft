/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:02:05 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 15:20:00 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	fix;

	fix = n;
	while (n-- > 0)
		*(char *)s++ = (unsigned char)c;
	return (s - fix);
}

/*int	main(void)
{
	char	s[10];

	printf("ft: %s\n", ft_memset(s, 'r', 5));
}*/