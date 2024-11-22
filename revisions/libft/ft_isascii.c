/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:52:34 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/25 22:22:04 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int   ft_isascii(int c)
{
      if (c >= 0 && c <= 127)
      {
            return (1);
      }
      else
            return (0);
}

int main(void){
      int c = 128;
      printf("%d\n", ft_isascii(c));
      printf("%d", isascii(c));
}