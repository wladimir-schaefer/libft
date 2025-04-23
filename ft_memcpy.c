#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char *s = src;
	unsigned char *d = dest;

	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

#include <stdio.h>
 int	main(void)
 {
	char src[] = "abc";
	char dst[] = "xyz";

	printf("%s\n", dst);
	ft_memcpy(dst, src, sizeof(src));
	printf("%s\n", dst);

 }