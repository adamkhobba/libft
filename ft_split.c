/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhobba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:04:15 by akhobba           #+#    #+#             */
/*   Updated: 2023/11/13 15:47:27 by akhobba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(char const *s, char c)
{
	int	i;
	int	l;	

	i = 0;
	l = 0;
	while(s[i])
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
char    **ft_split(char const *s, char c)
{
    char    **arr;
    size_t    i;
    size_t    j;
    size_t    l;
    size_t    size;

    i = 0;
    l = 0;
    size = ft_size(s, c) ;
    arr = (char **)malloc((size + 1) * sizeof(char *));
    while (l < size)
    {
      j = 0;
      while(s[i])
      {
        if (s[i] == c)
            break  ;
        i++;
        j++;
      }
        arr[l] = ft_substr(s,(i - j), j);
        l++;
		while(s[i] == c)
			i++;
    }
	arr[l] = NULL;
    return (arr);
}

int main(void)
{
    char const *input = "    ";
    char **result = ft_split(input, ' ');

    // Use the result array as needed, e.g., print the elements
    for (size_t i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free each allocated substring
    }

    free(result); // Free the array of pointers

    return 0;
}
