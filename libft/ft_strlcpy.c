/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:50:08 by dahmane           #+#    #+#             */
/*   Updated: 2024/11/01 11:15:06 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int psize;
	int i;

	psize = dstsize - 1;
	i = 0;
	while (src[i] && psize > 0)
	{
		dst[i] = src[i];
		i++;
		psize--;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	//int c = 'e';
	size_t n = 10;
	char str[11] = "hellooo";
	char strr[] = "worlds";
	char str2[11] = "hellooo";
	char strr2[] = "worlds";
	//char *res = memchr(str, c, n);
	//memchr(str, c, n);
	//ft_strlcat(str, strr, n);
	//printf("%s\n", str);
	printf("%zu\n", ft_strlcpy(str2, strr2, 6));
	printf("%s\n", str2);
	printf("%zu\n", strlcpy(str, strr, 6));
	printf("%s\n", str);
}