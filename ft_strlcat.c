/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:10:48 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/01 16:04:50 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	l;

	l = ft_strlen(dst);
	i = 0;
	while (i < size)
	{
		((char *)dst)[l] = ((char *)src)[i];
		i++;
		l++;
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
