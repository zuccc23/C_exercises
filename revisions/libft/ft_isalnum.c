/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahmane <dahmane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:41:11 by dahmane           #+#    #+#             */
/*   Updated: 2024/10/25 22:36:44 by dahmane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int   ft_isalnum(int c)
{
      if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
      {
            return (1);
      }
      else
            return (0);
}

int main(void)
{
      int c = 95;
      printf("%d\n", ft_isalnum(c));
      printf("%d", isalnum(c));
}