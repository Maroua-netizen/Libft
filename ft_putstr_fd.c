/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 05:48:04 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/17 09:31:59 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <stdio.h>
// #include <fcntl.h>

// int main()
// {
// 	int fd;

// 	fd = open("test.txt", O_CREAT | O_WRONLY | O_APPEND);
// 	if (fd == -1)
// 		perror("open");
// 	ft_putstr_fd("\n\tHello Again!", fd);
// 	close(fd);
// 	if (fd == -1)
// 		perror("close");
// }