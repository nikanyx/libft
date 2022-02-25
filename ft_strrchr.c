/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:05:08 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:59:55 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	cnt;

	ptr = (char *)s;
	cnt = ft_strlen(s) + 1;
	while (cnt-- > 0)
		if (ptr[cnt] == (char)c)
			return (&ptr[cnt]);
	return (NULL);
}
