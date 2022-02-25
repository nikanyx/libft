/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:18:42 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/25 22:53:49 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n-- > 0)
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	return (0);
}
