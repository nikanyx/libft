/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:58:45 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/23 22:07:29 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n-- > 0)
		*(char *)dst++ = *(char *)src++;
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*new;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = (char *) malloc(lens1 + lens2 + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, lens1);
	ft_memcpy(new + lens1, s2, lens2);
	return (new);
}

int	main(void)
{
	char	*src = "hello world";
	char	*src2 = " and beyond";
	char	*new;

	printf("Old strings: '%s', '%s'\n", src, src2);
	new = ft_strjoin(src, src2);
	printf("New string: %s\n", new);
}