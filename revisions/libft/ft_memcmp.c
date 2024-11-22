/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:16:34 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/28 14:30:10 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sz1;
	unsigned char *sz2;

	sz1 = (unsigned char *)s1;
	sz2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (*sz1 && n - 1 > 0)
	{
		if (*sz1 != *sz2)
			return (*sz1 - *sz2);
		sz1++;
		sz2++;
		n--;
	}
	return (*sz1 - *sz2);
}

int	main(void)
{
	int c = 'e';
	size_t n = 1;
	char str[] = "iello";
	char strr[] = "hello";
	//memchr(str, c, n);
	//ft_memchr(strr, c, n);
	printf("%d\n", ft_memcmp(str, strr, n));
	//printf("%s\n", ft_memchr(strr, c));
}