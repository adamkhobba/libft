/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:52:16 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/04 10:04:47 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src,size_t n)
{
	unsigned char		*mtf;
	const unsigned char	*ptr;
	unsigned char		*ptr2;

	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (!ptr && !ptr2)
		return (NULL);
	mtf = (unsigned char *)malloc(n);
	ft_memcpy(mtf, ptr, n);
	ft_memcpy(dest, mtf, n);
	return (dest);
}
