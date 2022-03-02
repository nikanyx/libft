/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:26:29 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/02 19:51:53 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_dig(int n)
{
	int	dig;

	dig = 0;
	while (n != 0)
	{
		n /= 10;
		dig++;
	}
	return (dig);
}

char	*ft_itoa(int n)
{
	int		neg;
	char	*new;
	int		i;

	neg = 1;
	i = num_dig(n);
	if (n <= 0)
	{
		neg = -1;
		new = (char *) malloc(++i + 1);
		if (n == 0)
			new[0] = '0';
		else
			new[0] = '-';
	}
	else
		new = (char *) malloc(i + 1);
	new[i--] = '\0';
	while (i >= 0)
	{
		new[i--] = neg * (n % 10) + 48;
		n /= 10;
	}
	return (new);
}
