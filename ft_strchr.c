/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:10:15 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 15:20:01 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	cnt;

	ptr = (char *)s;
	cnt = ft_strlen(s) + 1;
	while (cnt-- > 0)
		if (*ptr++ == (char)c)
			return (--ptr);
	return (NULL);
}

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_strchr(src, 'd');
	printf("%s\n%p\n", ptr, ptr);
}*/