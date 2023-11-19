/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:45:45 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/10 21:38:39 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else if (c >= 65 && c <= 90)
		return (c);
	else
		return (c);
}
/*int main ()
{
	int c;
int	i = 'a';
    while (i <= 'z')
    {
        c = ft_toupper(i);
        write(1, &c, 1);
        i++;
    }
}*/
