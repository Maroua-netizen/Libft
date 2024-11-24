/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:20:08 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/12 13:46:08 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespaces(const char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	long	nmb;

	i = whitespaces(str);
	sign = 1;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	nmb = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (nmb > (LONG_MAX - (str[i] - '0')) / 10)
		{
			if (sign == -1)
				return ((int)LONG_MIN);
			return ((int)LONG_MAX);
		}
		nmb *= 10;
		nmb = nmb + str[i] - '0';
		i++;
	}
	return ((int)(nmb * sign));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%d\n", ft_atoi("9223372036854775808\n"));
//     printf("%d\n", atoi("9223372036854775808\n"));
// }