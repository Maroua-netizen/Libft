/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:49:26 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/24 10:17:23 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int Value)
{
	if (Value >= 0)
		return (Value);
	return (-Value);
}

static int	len(int n)
{
	int	len;

	len = 1;
	while (ft_abs(n) >= 10)
	{
		n /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		abs_n;
	int		i;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(len(n) + 1, sizeof(char));
	if (!str)
		return (NULL);
	abs_n = ft_abs(n);
	i = len(n) - 1;
	while (i > 0)
	{
		str[i--] = abs_n % 10 + '0';
		abs_n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	else
		str[0] = abs_n % 10 + '0';
	return (str);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_itoa(45123));
// }