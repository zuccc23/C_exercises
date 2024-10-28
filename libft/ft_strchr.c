/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:46:40 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 00:07:00 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
    int c = 'e';
    char str[] = "hello";
    char strr[] = "hello";
    strchr(str, c);
    ft_strchr(strr, c);
    printf("%s\n", strchr(str, c));
    printf("%s\n", ft_strchr(strr, c));
}