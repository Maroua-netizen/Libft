/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmounsif <mmounsif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 07:58:14 by mmounsif          #+#    #+#             */
/*   Updated: 2024/11/24 10:49:20 by mmounsif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count += 1;
		i++;
	}
	return (count);
}

static char	*allocate(char const *s, int *i, char c)
{
	int		j;
	char	*buffer;
	int		start;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	buffer = ft_calloc(*i - start + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	j = 0;
	while (s[start] && s[start] != c)
		buffer[j++] = s[start++];
	return (buffer);
}

static char	**ft_free(char **strs, int k)
{
	while (k >= 0)
		free (strs[k--]);
	free (strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		k;

	if (!s)
		return (NULL);
	strs = ft_calloc(wordcount(s, c) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			strs[k] = allocate(s, &i, c);
			if (!strs[k])
				return (ft_free(strs, k));
			k++;
		}
	}
	return (strs);
}

// #include <stdio.h>

// int main()
// {
// 	int	i;
// 	char s[] = "This split split my head";
// 	char **strs = ft_split(s, ' ');
// 	if (!strs)
// 	{
// 		printf("(NULL)\n");
// 		return (0);
// 	}
// 	i = 0;
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
//         i++;
// 	}
// }