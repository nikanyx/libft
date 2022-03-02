/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:03:30 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/02 20:58:32 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = ft_strlen(s);
	new = (char *) malloc(i + 1);
	if (!new)
		return (NULL);
	new[i] = '\0';
	while (--i >= 0)
		new[i] = f(i, s[i]);
	return (new);
}
