/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:25:20 by mmounsif          #+#    #+#             */
/*   Updated: 2024/10/26 16:01:00 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

//  #include <ctype.h>
//  #include <stdio.h>

//  int main()
//  {
// 	printf("%d\n", toupper('A'));
// 	printf("%d\n", ft_toupper('A'));
//  }