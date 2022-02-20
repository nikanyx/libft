/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:42:48 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 20:16:45 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*s2;

	size = ft_strlen(s1) + 1;
	s2 = (char *) malloc(size);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, size);
	return (s2);
}

/*int	main(void)
{
	char	*src = "hello";
	char	*new;

	printf("Old string: %s\n", src);
	printf("Old str address: %p\n", src);
	new = ft_strdup(src);
	printf("New string: %s\n", new);
	printf("New str address: %p\n", new);
}*/