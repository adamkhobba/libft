/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 21:50:06 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/13 18:04:26 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	j;

	j = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		arr = (char *)malloc(1);
		arr[0] = '\0';
		return (arr);
	}
	arr = ft_calloc(1, len + 1);
	if (!arr)
		return (NULL);
	while (s[start] && j < len)
	{
		arr[j++] = s[start++];
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
