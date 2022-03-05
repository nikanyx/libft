#include <stdio.h>
#include "libft.h"

//ft_atoi.c
/*int	main(void)
{
	printf("ft_a: %d\n", ft_atoi("\t -2147483648"));
	printf("atoi: %d\n", atoi("\t -2147483648"));
}*/

//ft_bzero.c
/*int	main(void)
{
	char	s[10] = "HelloWorld";

	ft_bzero(s, 10);
	printf("ft: %s\n", s);
}*/

//ft_calloc.c
/*int	main(void)
{
	void	*ptr;

	ptr = ft_calloc(4, 4);
}*/

//ft_isalnum.c
/*int	main(void)
{
	printf("%d\n", ft_isalnum('.'));
}*/

//ft_isalpha.c
/*int	main(void)
{
	printf("%d\n", ft_isalpha('b'));
}*/

//ft_isascii.c
/*int	main(void)
{
	printf("%d\n", ft_isascii('\t'));
*/

//ft_isdigit.c
/*int	main(void)
{
	printf("%d\n", ft_isdigit('2'));
}*/

//ft_isprint.c
/*int	main(void)
{
	printf("%d\n", ft_isprint(' '));
}*/

//ft_itoa.c
/*int	main(void)
{
	printf("%s\n", ft_itoa(1456));
}*/

//ft_memchr.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_memchr(src, 's', 4);
	printf("%s\n%p\n", ptr, ptr);
}*/

//ft_memcmp.c
/*int	main(void)
{
	const char	src[20] = "Hello pessoal";
	const char	src2[20] = "Hello world";

	printf("%d\n", ft_memcmp(src, src2, 21));
}*/

//ft_memcpy.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[12] = "Hello world";

	printf("orig. string: %s\n", dest);
	ft_memcpy(dest, src, 5);
	printf("after memcpy: %s\n", dest);
}*/

//ft_memmove.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[12] = "Hello world";

	printf("orig. string: %s, %s\n", dest, src);
	ft_memmove(dest, src, 13);
	printf("after memcpy: %s, %s\n", dest, src);
	
	OR

	char dest[21] = "a shiny white sphere";
	char *ptr = target + 8;
	char *src = target + 2;
	
	printf("orig. string: %s\n", dest);
	ft_memmove(ptr, src, 5);
	printf("after memcpy: %s\n", dest);
}*/

//ft_memset.c
/*int	main(void)
{
	char	s[10];

	printf("ft: %s\n", ft_memset(s, 'r', 5));
}*/

//ft_putchar_fd.c
/*int	main(void)
{
	ft_putchar_fd('h', 1);
}*/

//ft_putendl_fd.c
/*int	main(void)
{
	ft_putendl_fd("hello world", 1);
}*/

//ft_putnbr_fd.c
/*int	main(void)
{
	ft_putnbr_fd(1584, 1);
}*/

//ft_putstr_fd.c
/*int	main(void)
{
	ft_putstr_fd("hello world", 1);
}*/

//ft_split.c
/*int	main(void)
{
	const char	s[] = "Today.is a.beautiful.day";
	char		c = '.';
	char		**ptr;

	ptr = ft_split(s, c);
	printf("original: '%s'\n", s);
	printf("delimiter: '%c'\n", c);
	printf("strings: '%s', '%s', '%s', '%s'\n", ptr[0], ptr[1], ptr[2], ptr[3]);
}*/

//ft_strchr.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_strchr(src, 'd');
	printf("%s\n%p\n", ptr, ptr);
}*/

//ft_strdup.c
/*int	main(void)
{
	char	*src = "hello";
	char	*new;

	printf("Old string: %s\n", src);
	printf("Old str address: %p\n", src);
	new = ft_strdup(src);
	printf("New string: %s\n", new);
	printf("New str address: %p\n", new);
}*/

//ft_strjoin.c
/*int	main(void)
{
	char	*src = "hello world";
	char	*src2 = " and beyond";
	char	*new;

	printf("Old strings: '%s', '%s'\n", src, src2);
	new = ft_strjoin(src, src2);
	printf("New string: %s\n", new);
}*/

//ft_strlcat.c
/*int	main(void)
{
	char	a[10] = "hello";
	char	b[10] = " world";
	int		result;

	result = ft_strlcat(a, b, 8);
	printf("my str: %s\n", a);
	printf("my ret: %d\n", result);
}*/

//ft_strlcpy.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		dest[10] = "Hello all";

	printf("%lu\n%s\n", ft_strlcpy(dest, src, 5), dest);
}*/

//ft_strlen.c
/*int	main(void)
{
	printf("Nr of characters: %zu\n", ft_strlen("Hello world!"));
}*/

//ft_strmapi.c
/*char	upp(unsigned int i, char c)
{
	i = 0;
	if (c > 96 && c < 123)
		return (c - 32);
	else
		return (c);
}

int	main(void)
{
	char	(*f)(unsigned int, char);
	char	*s = "hello world and universe";

	printf("%s\n", ft_strmapi(s, upp));
}*/

//ft_strncmp.c
/*int	main(void)
{
	printf("%d", ft_strncmp("Hellofa", "Hello", 8));
}*/

//ft_strnstr.c
/*int	main(void)
{
	const char	haystack[20] = "Hello world";
	const char	needle[4] = "or";
	char		*ptr;

	ptr = ft_strnstr(haystack, needle, 20);
	printf("%s\n", ptr);
}*/

//ft_strrchr.c
/*int	main(void)
{
	const char	src[20] = "Adeus pessoal";
	char		*ptr;

	ptr = ft_strrchr(src, 's');
	printf("%s\n%p\n", ptr, ptr);
}*/

//ft_strtrim.c
/*int	main(void)
{
	const char	s1[] = "..Hello world..";
	const char	set[] = "..";
	char		*ptr;

	ptr = ft_strtrim(s1, set);
	printf("string: %s\n", ptr);
}*/

//ft_substr.c
/*int	main(void)
{
	char	*src = "hello world and beyond";
	char	*new;

	printf("Old string: %s\n", src);
	new = ft_substr(src, 3, 7);
	printf("New string: %s\n", new);
}*/

//ft_tolower.c
/*int	main(void)
{
	printf("%c\n", ft_tolower('G'));
}*/

//ft_toupper.c
/*int	main(void)
{
	printf("%c\n", ft_toupper('~'));
}*/