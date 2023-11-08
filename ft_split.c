#include <stdio.h>

int	ft_strlen(char str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check(char c, char chaset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset)
			return (0);
		i++;
	}
	return (1);
}
char	**ft_spit(char str, char charset)
{
	int	i;

	i = 0;





}
