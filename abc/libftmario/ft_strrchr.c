/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdodevsk <mdodevsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:43:27 by mdodevsk          #+#    #+#             */
/*   Updated: 2024/10/26 19:43:27 by mdodevsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;

	t = NULL;
	while (*s)
	{
		if (*s == c)
			t = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (t);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c = 'j';
	char str[] = "Hello";
	char strr[] = "Hello";
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(strr, c));
	return (0);
}*/