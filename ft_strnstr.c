/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:53:51 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/20 17:23:07 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	ptr = (char *)haystack;
	if (!*needle)
		return (ptr);
	while (ptr[i] && len-- > 0)
	{
		j = 0;
		while (ptr[i + j] == needle[j] && ptr[i + j])
		{
			if (!(needle[j + 1]))
				return (&ptr[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	haystack[20] = "Hello world";
	const char	needle[4] = "or";
	char		*ptr;

	ptr = ft_strnstr(haystack, needle, 20);
	printf("%s\n", ptr);
}*/