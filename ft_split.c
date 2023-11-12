/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:04:15 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/12 18:03:26 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

static int	ft_size(char *s)
{
	int	i;
	int	l;	

	i = 0;
	l = 0;
	while(s[i])
	{
		if (s[i] == c)
			l++;
		i++;
	}
	l++;
	return (l);
}

static int ft_strlen_c()
{

}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	size;
		
	i = 0;
	size = ft_size(s) ;
	arr = (char **)malloc(size + 1);
	while (i < size)
	{
		arr[i] = (char *)malloc ();
	}
	return (arr);
}
