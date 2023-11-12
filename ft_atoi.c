/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:54:32 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/10 21:30:32 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(const char *nptr)
{
	int		i;
	int		n;
	int		f;
	char	*str;

	i = 0;
	n = 0;
	f = 1;
	str = (char *)nptr;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			f = f * -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	return (n * f);
}
/*int main (void)
{
	const char s[] = "123";
	int n = ft_atoi(s);
	printf("%d", n); 
}*/
