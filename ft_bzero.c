/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:42:59 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/16 13:51:56 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	fix;

	fix = n;
	while (n-- > 0)
		*(char *)s++ = '\0';
	return (s - fix);
}

/*int	main(void)
{
	char	s[10] = "HelloWorld";

	ft_bzero(s, 10);
	printf("ft: %s\n", s);
}*/