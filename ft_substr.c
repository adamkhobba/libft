/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:50:06 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/11 11:00:16 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	arr = ft_calloc(1, len + 1);
	if (!arr)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		arr[0] = '\0';
		return (arr);
	}
	while (s[start] && len > 0)
	{
		arr[j] = s[start];
		start++;
		j++;
		len--;
	}
	arr[j] = '\0';
	return (arr);
}
/*
 int main()
{
 	char    *str;

     str = ft_substr("Hello World", 5, 5);
     printf("%s\n", str);

     free(str);
}*/
