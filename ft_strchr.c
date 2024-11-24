/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:50:31 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/19 01:34:48 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	size_t			len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strchr("abcdec", 't'));
// }