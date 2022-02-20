/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:01:26 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 16:13:31 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
		if (*ptr++ == (unsigned char)c)
			return (--ptr);
	return (NULL);
}

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_memchr(src, 's', 4);
	printf("%s\n%p\n", ptr, ptr);
}*/