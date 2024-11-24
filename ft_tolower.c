/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:01:49 by mmounsif          #+#    #+#             */
/*   Updated: 2024/10/26 16:03:01 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

//  #include <ctype.h>
//  #include <stdio.h>

//  int main()
//  {
// 	printf("%d\n", tolower('A'));
// 	printf("%d\n", ft_tolower('A'));
//  }