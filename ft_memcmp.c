#include <stdio.h>


int	ft_memcmp(const void *s1, const void *s2,size_t n)
{
	size_t i;
	char *s11;
	char *s22;

	i = 0;
	s11 = (char *)s1;
	s22 = (char *) s2;
	while ((s11[i] && s22[i]) && (s11[i] == s22[i]) && i < n - 1)
	{
		i++;
	}
	return (s11[i] - s22[i]);
}
int main ()
{
	char s1 [] = "adam";
	char s2 [] = "adamb";
	int n = ft_memcmp(s1,s2,5);
	printf("%d",n);
	return 0;
}
