/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:08:56 by dahmane           #+#    #+#             */
/*   Updated: 2024/11/01 11:43:15 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int psize;
	int ssize;
	int i;
	int j;
	
	ssize = ft_strlen(dst);
	if (dstsize <=  ssize)
		return (ft_strlen(src) + dstsize);
	psize = (dstsize - strlen(dst)) - 1; 
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && psize > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
		psize--;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + ssize);
}
int	main(void)
{
	//int c = 'e';
	size_t n = 10;
	char str[11] = "hello";
	char strr[] = "worlds";
	char str2[11] = "hello";
	char strr2[] = "worlds";
	//char *res = memchr(str, c, n);
	//memchr(str, c, n);
	//ft_strlcat(str, strr, n);
	//printf("%s\n", str);
	printf("%zu\n", ft_strlcat(str2, strr2, -1));
	printf("%s\n", str2);
	printf("%zu\n", strlcat(str, strr, -1));
	printf("%s\n", str);
}
