/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 19:26:29 by cmachado          #+#    #+#             */
/*   Updated: 2022/03/01 20:38:51 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	num_dig(int n, int i)
{
	int	dig;

    dig = 0;
	while (n * neg > 0)
	{
		n /= 10;
		dig++;
	}
	return (dig);
	/*if (n > 10 || n < -10)
		return (i++);
	else
		return (num_dig(n / 10, i++));*/
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
		new = (char *) malloc(i + 2);
		if (n != 0)
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

int	main(void)
{
	printf("%s\n", ft_itoa(1456));
}