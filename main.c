/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:17:58 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/04 10:07:38 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char		s[];
	char		src[];
	char		dest[];
	char		dst[100];
	const char	sc[];
	char		*set;
	char		big[];
	char		little[];
	char		src3[];

	printf("test of isalpha\n");
	printf("%d", ft_isalpha(65));
	printf("%d", ft_isalpha(48));
	printf("%d", ft_isalpha(90));
	printf("%d", ft_isalpha(50));
	printf("%d", ft_isalpha(66));
	printf("%d", ft_isalpha(57));
	printf("\ntest of isdigit\n");
	printf("%d", ft_isdigit(65));
	printf("%d", ft_isdigit(48));
	printf("%d", ft_isdigit(90));
	printf("%d", ft_isdigit(50));
	printf("%d", ft_isdigit(66));
	printf("%d", ft_isdigit(57));
	printf("\ntest of isalnum\n");
	printf("%d", ft_isalnum(66));
	printf("%d", ft_isalnum(48));
	printf("%d", ft_isalnum(90));
	printf("%d", ft_isalnum(50));
	printf("%d", ft_isalnum(66));
	printf("%d", ft_isalnum(57));
	printf("\ntest of isascii\n");
	printf("%d", ft_isascii(132));
	printf("%d", ft_isascii(-1));
	printf("%d", ft_isascii(-4));
	printf("%d", ft_isascii(213));
	printf("%d", ft_isascii(233));
	printf("%d", ft_isascii(144));
	printf("\ntest of isprint\n");
	printf("%d", ft_isprint(30));
	printf("%d", ft_isprint(12));
	printf("%d", ft_isprint(0));
	printf("%d", ft_isprint(4));
	printf("%d", ft_isprint(66));
	printf("%d", ft_isprint(127));
	printf("\ntest of isprint\n");
	printf("%ld", ft_strlen("asdfgh1234586901234586931234jgfadrfrfrt4e5"));
	printf("\ntest of memset\n");
	s[] = "adamkhobba";
	printf("\nafter memset\n%s", s);
	ft_memset(s, 65, 4);
	printf("\nbefore memset\n%s", s);
	printf("test of bzero");
	printf("\nbefore bzero\n%s", s);
	ft_bzero(s, 4);
	printf("\nafter bzero\n%s", s);
	printf("test of memcpy");
	src[] = "adahmnhqwmer";
	dest[] = "khom";
	ft_memcpy(dest, src, 3);
	printf("\n%s", dest);
	printf("\ntest of strlcpy");
	printf("\n%ld\n", ft_strlcpy(dst, src, 2));
	printf("test of strlcat");
	printf("\n%ld\n", ft_strlcat(dst, src, 2));
	printf("test of toupper");
	printf("\n%d\n", ft_toupper(111));
	printf("test of tolower");
	printf("\n%d\n", ft_tolower(76));
	printf("test of strchr");
	printf("\n%s\n", ft_strchr(src, 'm'));
	printf("test of strrchr");
	printf("\n%s\n", ft_strrchr(src, 'm'));
	printf("test of strncmp");
	printf("\n%d\n", ft_strncmp("adam", "adab", 3));
	printf("test of memchr");
	sc[] = "adcamm";
	printf("\nbefore\n%s", sc);
	set = ft_memchr(sc, 'c', 3);
	printf("\nafter\n%s", set);
	printf("\ntest of strnstr\n");
	big[] = "hunterxhunter";
	little[] = "x";
	printf("%s", ft_strnstr(big, little, 9));
	printf("\ntest of memmove\n");
	src3[] = "adcde";
	printf("beofre memmove: %s\n", src3);
	ft_memmove(src3 + 2, src3, 3);
	printf("After memmove: %s\n", src3);
	return (0);
}
