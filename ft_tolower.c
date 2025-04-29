int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%c\n", ft_tolower('A')); // prints 'a'
	printf("%c\n", ft_tolower('z')); // prints 'z'
	printf("%c\n", ft_tolower('1')); // prints '1'
}
*/