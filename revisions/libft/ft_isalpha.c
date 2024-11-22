/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:18:52 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/27 00:07:46 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 65 && c<= 90) || (c >= 97 && c <=122))
    {
        return (1);
    }
    else
        return (0);
}

int main(void)
{
    int c = 97;
    printf("%d\n", ft_isalpha(c));
    printf("%d", isalpha(c));
}
