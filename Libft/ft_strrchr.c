/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:50:31 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/18 22:51:27 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	len;
	char			*chr;

	len = ft_strlen(s);
	chr = NULL;
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char) c)
			chr = (char *)s + i;
		i++;
	}
	return (chr);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", ft_strrchr("abcdec123", 'c'));
// }