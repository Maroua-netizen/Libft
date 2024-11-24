/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:04:01 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/19 01:22:10 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d < s)
		ft_memcpy(dst, src, len);
	else if (d > s)
		while (len--)
			d[len] = s[len];
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char	dst[] = "123456789";
// 	printf("%s\n", ft_memmove(dst + 3, dst, 5));
// }