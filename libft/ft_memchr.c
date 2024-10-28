/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:21:47 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/28 14:08:28 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *sz;
	
	sz = (unsigned char *)s;
	while (n > 0)
	{
		if (*sz == (unsigned char*)c)
			return ((void*)sz);
		sz++;
		n--;
	}
	return (NULL);
}

int	main(void)
{
	int c = 'e';
	size_t n = 1;
	char str[] = "hello";
	char strr[] = "hello";
	char *res = memchr(str, c, n);
	//memchr(str, c, n);
	ft_memchr(strr, c, n);
	printf("%s\n", ft_memchr(strr, c, n));
	//printf("%s\n", ft_memchr(strr, c));
}