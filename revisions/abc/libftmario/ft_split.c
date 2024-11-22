/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdodevsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:13:36 by mdodevsk          #+#    #+#             */
/*   Updated: 2024/11/08 13:59:25 by mdodevsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

char	*allocate_word(const char *s, char c)
{
	int		i;
	char	*w;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	w = malloc(sizeof(char) * (i + 1));
	if (!w)
		return (NULL);
	i = 0;
	while (*s != c && *s)
		w[i++] = *s++;
	return (w);
}

void	add_words(char **strs, char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			strs[i] = allocate_word(s, c);
			if (!strs[i])
				return ;
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	strs[i] = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**strs;

	strs = malloc(sizeof(char *) * count_word(s, c) + 1);
	if (strs == NULL)
		return (NULL);
	add_words(strs, s, c);
	return (strs);
}
/*
void	ft_print(char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strs[i] != NULL)
	{
		while (strs[i][j])
		{
			write (1, &strs[i][j], 1);
			j++;
		}
		if (strs[i][j] == '\0')
			write (1, "\\", 1);
		write (1, "\n", 1);
		i++;
		j = 0;
	}
	if (strs[i] == NULL)
		write (1, "null", 4);
}

void	free_matrice(char **strs)
{
	int	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

int	main(int ac, char **av)
{
	(void)ac;
	char	**strs = ft_split(av[1], av[2][0]);
	if (!strs)
		return (1);
	ft_print(strs);
	free_matrice(strs);
	return (0);
}*/
