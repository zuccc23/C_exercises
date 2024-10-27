/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:53:54 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 16:09:52 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*sdst;
	unsigned char	*ssrc;
	
	sdst = (unsigned char*)dst;
	ssrc = (unsigned char*)src;
	if (!src || !dst)
		return (dst);
	while (n > 0)
	{
		*sdst = *ssrc;
		sdst++;
		ssrc++;
		n--;
	}
	return (dst);
}

int	main(void)
{
    //int c = 38;
    char str[] = "olleh";
    char strr[] = "hello";
    //memcpy(str, strr, 5);
    //ft_memcpy(str, strr, 2);
    printf("%s\n", str);
    //printf("%s", strr);
}