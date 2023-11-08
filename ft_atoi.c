

#include <stdio.h>


int ft_atoi(const char *nptr)
{
	int	i;
	int	n;
	int	f;
	char *str;


	i = 0;
	n = 0;
	f = 0;
	str = (char *)nptr;
	if (str[i] == ' '  || str[i] == '\t')
		i++;
	if ( str[0] == '-')
	{
		f = 1;
		i++;
	}
	while (nptr[i])
	{
		n = n * 10 + (str[i] - 48);	
		i++;
	}

	if (f == 1)
		return (-n);
	else
		return n;
}

int main (void)
{
	const char s[] = "123";
	int n = ft_atoi(s);
	printf("%d", n); 
}
