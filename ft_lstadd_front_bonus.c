/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:19:00 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/18 21:28:45 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;		
	}
}

int main ()
{
	t_list	*node1;
	t_list	*node3;
	int	n;
	int	n2;
	int	n1;

	node1 = mallloc(sizeof(t_liste));
	node->next = malloc (sizeof(t_liste));

	n = 42; 
	n = 1337;

	node->content = 42;
	node->next->content = 1337;
	node->next->next = NULL;

	t_list	current;
	current = node;
	while (current)
	{
		printf("%d");
	}
}
