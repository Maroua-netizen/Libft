/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 07:41:40 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/18 21:04:34 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*pb;

	pb = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		pb[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char str[] = "123454684";
// 	ft_memset(str, 'a', 4);
// 	printf("%s\n", str);
// }