/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdodevsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:16:07 by mdodevsk          #+#    #+#             */
/*   Updated: 2024/11/12 16:28:30 by mdodevsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	lstprint(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp != NULL)
	{
		printf("%c\n", *(char *)temp->content);
		temp = temp->next;
	}
}*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
	
}

/*int	main(void)
{
	t_list	*lst = NULL;
	t_list	*temp = lst;
	t_list	*new = NULL;
	t_list	*new2 = NULL;
	char	c = 'a';
	char	b = 'b';
	char	d = 'c';
	
	while (c <= 'z')
	{
		ft_lstadd_back(&lst, ft_lstnew(&c));
		c++;
	}
	temp = ft_lstnew(&c);
	new = ft_lstnew(&b);
	new2 = ft_lstnew(&d);
	ft_lstadd_back(&temp, new);
	ft_lstadd_back(&temp, new2);


	lst = temp;
	lstprint(lst);
	free(lst);
}*/
