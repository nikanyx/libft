/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:53:51 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/05 20:05:55 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	ptr = (char *)haystack;
	if (!*needle)
		return (ptr);
	while (ptr[i] && len > 0)
	{
		j = 0;
		while (len-- > 0 && ptr[i + j] == needle[j] && ptr[i + j])
		{
			if (!(needle[j + 1]))
				return (&ptr[i]);
			j++;
			len--;
		}
		i++;
	}
	return (0);
}
