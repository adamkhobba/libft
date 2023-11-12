/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:04:15 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/12 21:27:14 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c)
{
	int	i;
	int	l;	

	i = 0;
	l = 0;
	while(s[i])
	{
		if (s[i] == c)
			l++;
		while (s[i] == c)
			i++;
		i++;
	}
	l++;
	return (l);
}

int	ft_suu(char const *s, char c)
{
	int	i;
	int *irr;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
			if (s[i] == c)
				break ;
			i++;
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	l;
	size_t	size;
		
	i = 0;
	l = 0;
	size = ft_size(s, c) ;
	arr = (char **)malloc(size + 1);
	while (i < size)
	{
		arr[i] = (char *)malloc (ft_suu(s + l, c));
		l = ft_suu(s + l, c); 
	}
	return (arr);
}

int main (void)
{
	char s[] = "adam khobba ggg";
	char c = ' '; 
	int	i;

//	printf("%d",ft_size(s,c));
		printf("%d",ft_suu(s, c));
}
