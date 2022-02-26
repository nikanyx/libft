/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:28:14 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/26 17:55:51 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n-- > 0)
		*(char *)dst++ = *(char *)src++;
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = (char *) malloc(len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s + start, len);
	s2[len] = '\0';
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	/*int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;*/
	new = NULL;
	/*while (s[i])
	{
		j = 0;
		while (s[i++] != c)
			j++;
		new = ft_substr(s, i - 1 - j, j);
		if (!new++)
			return (NULL);
	}
	return (new);*/
	while (*s)
	{
		if (*s != c)
			*(char *)new++ = *(char *)s++;
		else
		{
			*(char *)new++ = '\0';
			*s++;
		}
	}
}

int	main(void)
{
	const char	s[] = "Today.is a.beautiful.day";
	char		c = '.';
	char		**ptr;

	ptr = ft_split(s, c);
	printf("string: %s\n", ptr[0]);
}