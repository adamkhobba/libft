/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:22:03 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/11 11:08:56 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	f;

	i = 0;
	if (!(big || little))
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		f = 0;
		while (big[i + f] == little[f] && little[f] && i + f < len)
			f++;
		if (little[f] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	char big [] = "hunterxhunter";
	char little [] = "x";
	
	printf("%s",ft_strnstr(big,little,10));
	return (0);
}*/
