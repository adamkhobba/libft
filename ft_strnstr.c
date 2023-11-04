/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:59:40 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/03 22:25:03 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	f;
	char	*big2;
	char	*little2;

	i = 0;
	big2 = (char *)big;
	little2 = (char *)little;
	if (little[0] == '\0')
		return (big2);
	if (ft_strlen(big) < len)
		return 0;
	while (i < len - 1 && big2[i])
	{
		f = 0;
		while (big[i + f] && little2[f] == big2[i + f])
			f++;
		if (little2[f] == '\0')
			return (big2 + i);
		i++;
	}
	return (0);
}
