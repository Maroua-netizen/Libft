/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:17:07 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/18 21:49:47 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	ft_toupper(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// int main()
// {
// 	char s[] = "abcd";
// 	ft_striteri(s, ft_toupper);
// 	printf("%s\n", s);
// }