/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:11:22 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/17 17:20:38 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (len && dstsize > 0)
	{
		while (src && --dstsize > 0)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}

/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[10] = "Hello all";

	printf("%lu\n%s\n", ft_strlcpy(dest, src, 5), dest);
}*/