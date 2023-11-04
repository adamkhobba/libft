/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:04:55 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/03 21:12:07 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	char *sv;
	char *sc;
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
