/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:00:41 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 16:10:54 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*sdst;
	unsigned char	*ssrc;
	
	i = 0;
	sdst = (unsigned char*)dst;
	ssrc = (unsigned char*)src;
	if (!src || !dst)
		return (dst);
	while (i < len - 1)
	{
		ssrc++;
		sdst++;
		i++;
	}
	while (len > 0)
	{
		*sdst = *ssrc;
		ssrc--;
		sdst--;
		len--; 
	}
	return (dst);
}

int	main(void)
{
    //int c = 38;
    char src[] = "helloo";
    char *dest;

    dest = src+2;
    //memmove(dest, src, 3);
    ft_memmove(dest, src, 3);
    printf("%s\n", dest);
}