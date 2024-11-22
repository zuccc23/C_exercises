/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:08:35 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 00:47:44 by dahmane          ###   ########.fr       */
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
			t = (char*)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	
	return (t);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
    int c = 'l';
    char str[] = "hello";
    char strr[] = "hello";
    printf("%s\n", strrchr(str, c));
    printf("%s\n", ft_strrchr(strr, c));
}