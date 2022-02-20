/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:05:08 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 15:11:18 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	cnt;

	ptr = (char *)s;
	cnt = ft_strlen(s) + 1;
	while (cnt-- > 0)
		if (ptr[cnt] == c)
			return (&ptr[cnt]);
	return (NULL);
}

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_strrchr(src, 'z');
	printf("%s\n%p\n", ptr, ptr);
}*/