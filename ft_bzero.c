/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:29:35 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/19 01:22:34 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*pb;

	pb = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		pb[i] = 0;
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	unsigned int	i;
// 	unsigned int	len;

// 	char str[] = "abcd";
// 	len = strlen(str);
// 	bzero(str, 2);
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("%c\n", str[i]);
// 		i++;
// 	}
// }