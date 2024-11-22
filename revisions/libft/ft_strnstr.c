/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:34:45 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/28 17:11:54 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *src, const char *dest, size_t len)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	//bonjourdanieuhdaniya daniya 
	while (i < len && src[i])
	{
		j = 0;
		while (src[i+j] == dest[j] && i+j < len)
		{
			if (dest[j + 1] == '\0')
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	int c = 'e';
	size_t n = 3;
	char str[] = "nfiovphello";
	char strr[] = "hello";
	char *res = memchr(str, c, n);
	//memchr(str, c, n);
	//ft_memchr(strr, c, n);
	printf("%s\n", ft_strnstr(str, strr, 12));
	//printf("%s\n", ft_memchr(strr, c));
}