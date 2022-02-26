/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:19:51 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/26 16:11:58 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	char	*new;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	new = (char *) malloc(len_s1 - len_set * 2 + 1);
	if (!new)
		return (NULL);
	if (ft_memcmp(s1, set, len_set) == 0)
		if (ft_memcmp(s1 + len_s1 - len_set, set, len_set) == 0)
			ft_memcpy(new, s1 + len_set, len_s1 - len_set * 2);
	return (new);
}
