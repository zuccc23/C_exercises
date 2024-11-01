/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:18:00 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/29 13:40:58 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char		*ft_strdup(const char *s1)
 {
	int size;
	char *s2;
	int i = 0;

	size = ft_strlen(s1);
	s2 = malloc(sizeof(char) * size);
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i]; 
		i++;
	}
	s2[i] = '\0';
	return (s2);
 }

int	main(void)
{
	int c = 'e';
	size_t n = 1;
	char str[] = "hello";
	char strr[] = "hellow";
	char *res = memchr(str, c, n);
	//memchr(str, c, n);
	//ft_memchr(strr, c, n);
	printf("%s\n", ft_strdup(strr));
	printf("%s\n", strdup(str));
	free(ft_strdup(strr));
}
 