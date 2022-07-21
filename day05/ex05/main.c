#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char haystack[20] = "Hello World!";
	char needle[10] = "p";
	char *ret;

	ret = ft_strstr(haystack, needle);
	printf("Substring is %s\n", ret);
	return (0);
}
