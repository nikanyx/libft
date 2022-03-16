/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:53:51 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/16 22:18:35 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[i] && len > 0)
	{
		j = 0;
		while (needle[j] && i + j < len)
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
			{
				j = 0;
				break ;
			}
		}
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
