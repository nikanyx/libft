/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:45:25 by cmachado          #+#    #+#             */
/*   Updated: 2022/02/15 19:29:00 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	nb;
	int	cnt;

	nb = 0;
	cnt = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cnt++;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nb *= 10;
		nb += str[0] - 48;
		str++;
	}
	if (cnt % 2)
		nb *= -1;
	return (nb);
}

/*int	main(void)
{
	printf("atoi: %d\n", ft_atoi("\t +214748364"));
}*/