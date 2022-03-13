/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:58:45 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/13 00:13:07 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = (char *) malloc(lens1 + lens2 + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, lens1);
	ft_memcpy(new + lens1, s2, lens2);
	new[lens1 + lens2] = '\0';
	return (new);
}
