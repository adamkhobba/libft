
//#include "libft.h"
#include <stdio.h>

#define size_t long unsigned int 


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t f;
	char *big2;
	char *little2;
		
	i = 0;
	big2 = (char *)big;
	little2 = (char *)little;
	while (big2[i])
	{
		f = 0;
		while (big[i + f] == little2[f] )
		{
			if (little2[f] == '\0')
			{
				return  (big2 + i);
			}
			f++;
		}
		i++;
	}
	return big2;
}
int main ()
{
	char big [] = "hunterxhunter";
	char little [] = "x";
	
	printf("%s",ft_strnstr(big,little,10));
	return 0;
}
