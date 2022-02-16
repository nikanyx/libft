/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:45:25 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/16 14:15:25 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nb = nb * 10 + (str[0] - 48);
		str++;
	}
	return (nb * neg);
}

/*int	main(void)
{
	printf("ft_a: %d\n", ft_atoi("\t -2147483648"));
	printf("atoi: %d\n", atoi("\t -2147483648"));
}*/