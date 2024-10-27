/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:39:13 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 13:34:42 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*schar;
	
	i = 0;
	schar = (unsigned char*)s;
	if (!s)
	{
		return (NULL);
	}
	while (i < n)
	{
		schar[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
    int c = 38;
    int str[] = {1, 2, 3};
    int strr[] = {1, 2, 3};
    memset(str, c, 3);
    ft_memset(strr, c, 3);
    printf("%d\n", str[1]);
    printf("%d", strr[1]);
}