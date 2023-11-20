/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:05:02 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/20 11:53:38 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*twp;
	t_list	*new_list;
	t_list	*node;
	
	if (!lst)
		return (NULL);
//  new_list = NULL;
	ft_lstiter(lst,f);
	new_list = malloc(sizeof(t_list)); 
	twp = lst;
	while (twp)
	{ 
		twp->content = new_lst->content;
		new_lst->next = malloc(sizeof(t_list)); 
		new_lst = new_list->next;
		twp = twp->next;
	}
	twp = lst;
  while (twp)
  { 
    ft_lstdelone(lst,del);
    lst = lst->next;
  } 
  return (new_lst); 
}
