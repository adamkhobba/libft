/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:33:46 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/19 18:02:41 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content); 
	free(lst);		
}

void del(void *data) 
{
     free(data);
}
/*
int main ()
{
	t_list	*node_0;
	int	N;
	int	N1;

	node_0 = malloc(sizeof(t_list));
	node_0->next= malloc(sizeof(t_list));
	node_0->next->next= malloc(sizeof(t_list));
	N = 42;
	N1 = 122;
	node_0->content = &N;
	node_0->next->content = &N1;
	node_0->next->next = NULL;

	ft_lstdelone(node_0,del);		
	return 0;	
}
*/
int main()
{
     t_list *node = (t_list *)malloc(sizeof(t_list));
     node->content = strdup("ff");
     node->next = NULL;
     ft_lstdelone(node, del);
     return 0;
}
