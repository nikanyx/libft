/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:10:15 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:55:23 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
