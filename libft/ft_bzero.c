/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:30:22 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/26 23:22:01 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
    int i;
    i = 0;
    unsigned char *schar = (unsigned char*)s;
    while (i < n)
    {
        schar[i] = '\0';
        i++;
    }
}

int	main(void)
{
    size_t c = 1;
    char str[] = "hello";
    char strr[] = "hello";
    bzero(str+1, c);
    ft_bzero(strr+1, c);
    printf("%s\n", str);
    printf("%s\n", strr);
}