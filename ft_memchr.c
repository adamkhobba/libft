/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:04:55 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/01 20:27:42 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#define size_t long unsigned int 

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char *sv;

	i = 0;
	sv = (char *)s;
	while (sv[i])
	{
		if (sv[i] == c)
			return(sv + i);
		i++;
	}
	return sv;
}
int main (void)
{
	const char s [] = "adam.chh";
	char c = '.';
	char *ret;

	ret = ft_memchr(s,c,3);
	printf("%s",ret);
	return 0;
}
