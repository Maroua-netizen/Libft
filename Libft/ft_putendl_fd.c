/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:21:41 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/17 09:24:04 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main()
// {
// 	int fd;

// 	fd = open("test.txt", O_CREAT | O_WRONLY | O_APPEND);
// 	if (fd == -1)
// 		perror("open");
// 	ft_putendl_fd("\nHello World!", fd);
// 	close(fd);
// 	if (fd == -1)
// 		perror("close");
// }