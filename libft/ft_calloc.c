/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:43:52 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/29 14:52:42 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	unsigned char	*res;
	int i = 0;

	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	while (i < count * size)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}

int	main(void)
{
	//int c = "hel";
	size_t n = 1;
	int *str = ft_calloc(3, sizeof(int));
	int *strrr = calloc(2, sizeof(int));
	int *abc = malloc(sizeof(int) * 3);
	//char *res = memchr(str, c, n);
	//memchr(str, c, n);
	//ft_memchr(strr, c, n);
	//printf("%s\n", ft_strdup(strr));
	/*printf("%d\n", str[0]);
	printf("%d\n", str[1]);
	printf("%d\n", str[2]);
	printf("%d\n", str[3]);*/
	//printf("%s\n", strr);
	strrr[0] = 1;
	strrr[1] = 2;
	strrr[2] = 3;
	strrr[3] = 4;

	abc[0] = 1;
	abc[1] = 1;
	abc[2] = 1;
	abc[8] = 1;
	printf("%d\n", strrr[0]);
	printf("%d\n", strrr[1]);
	printf("%d\n", strrr[2]);
	printf("%d\n", strrr[3]);
	printf("%d\n", strrr[100]);
	printf("abc = %d\n", abc[8]);
	//free(ft_strdup(strr));
}
