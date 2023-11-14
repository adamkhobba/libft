/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:04:15 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/14 10:37:55 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = 0;
	j = ft_strlen(s);
	while (s[i++] == c)
		while (s[j--] == c)
			i = 0;
	while (s[i] && i < j)
	{
		if (s[i] == c)
			l++;
		while (s[i] == c)
			i++;
		i++;
	}
	l++;
	return (l);
}

static int	ft_a(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	else
		return (1);
}

static char	**ft_rspl(char **arr, size_t size, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = 0;
	while (l < size)
	{
		j = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		arr[l++] = ft_substr(s, (i - j), j);
		if (arr[0][0] == '\0')
			l--;
		while (s[i] == c)
			i++;
	}
	if (l > 0)
		arr[l] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_size(s, c);
	i = size;
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (!arr)
	{
		while (0 < i)
			free(arr[i--]);
		free(arr);
		return (NULL);
	}
	if (!ft_a(s, c))
	{
		arr[0] = 0;
		return (arr);
	}
	arr = ft_rspl(arr, size, s, c);
	return (arr);
}

int	main(void)
{
	char const	*input;
	char		**result;

	input = NULL;
	result = ft_split(input, '\0');
	printf("%zu\n", ft_size(input, ' '));
	//	printf("%u\n",ft_a(input, ' '));
	// Use the result array as needed, e.g., print the elements
	for (size_t i = 0; result[i] != NULL; i++)
	{
		printf("%s\n", result[i]);
		free(result[i]); // Free each allocated substring
	}
	free(result); // Free the array of pointers
	return (0);
}
