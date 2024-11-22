/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:18:52 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/25 22:33:15 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if ((c >= 32 && c <= 126)){
        return (1);
    }
    else
        return (0);
}

int main(void)
{
    int c = 31;
    printf("%d\n", ft_isprint(c));
    printf("%d", isprint(c));
}