/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:04:15 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/13 18:06:00 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c)
{
	int	i;
	int	l;	

	i = 0;
	l = 0;
	while (s[i] == c)
			i++;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			l++;
		while (s[i] == c)
			i++;
		i++;
	} l++;
	return (l);
}

int	ft_a(char const *s, char c)
{
	int	i;

	i = 0;
	while(s[i] == c)
			i++;
	if (s[i] == '\0')
		return (0);
	else
		return (1);
}

char	**ft_rspl(char **arr, size_t size, char const *s, char c)
{
	size_t i;	
	size_t j;	
	size_t l;	

	i = 0;
	l = 0;
    while (l < size)
    {
      j = 0;
      while(s[i++])
      {
        if (s[i] == c)
            break  ;
        j++;
      }
        arr[l++] = ft_substr(s,(i - j), j);
		while(s[i] == c)
			i++;
    }
	arr[l] = NULL;
	return (arr);
}

char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t    size;

    size = ft_size(s, c) ;
    arr = (char **)malloc((size + 1) * sizeof(char *));
	if (ft_a(s, c))
	{
			arr[0] = NULL;
			return arr;
	}
	arr = ft_rspl(arr, size, s, c);
    return (arr);
}

int main(void)
{
    char const *input = "adam khobba  ";
    char **result = ft_split(input, ' ');

	printf("%zu\n",ft_size(input, ' '));
    // Use the result array as needed, e.g., print the elements
    for (size_t i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free each allocated substring
    }

    free(result); // Free the array of pointers

    return 0;
}
