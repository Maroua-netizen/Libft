/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:07:35 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/17 09:20:32 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main()
// {
// 	int fd;

// 	fd = open("test.txt", O_CREAT | O_WRONLY | O_APPEND);
// 	if (fd == -1)
// 		perror("open");
// 	ft_putchar_fd('c', fd);
// 	close(fd);
// 	if (fd == -1)
// 		perror("close");
// }