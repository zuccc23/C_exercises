/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdodevsk <mdodevsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:06:23 by mdodevsk          #+#    #+#             */
/*   Updated: 2024/10/27 13:06:23 by mdodevsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	while (i < n - 1)
	{
		temp_dest++;
		temp_src++;
		i++;
	}
	while (n > 0)
	{
		*temp_dest = *temp_src;
		temp_dest--;
		temp_src--;
		n--;
	}
	return (dest);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
int	main(int ac, char **av)
{
	(void)ac;
	char str[] = "hellowef";
	char strr[] = "hellowef";
	char *dest = str + 2;
	char *destt = strr + 2;
	ft_memmove(dest, str, 5);
	memmove(destt, strr, 5);
	printf("%s\n", dest);
	printf("%s\n", destt);
	return (0);
}*/