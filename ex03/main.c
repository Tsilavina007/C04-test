#include <stdio.h>

int ft_atoi(char *str);

int	main(void)
{
	char	str[] = "     ---+--+123 4ab567";

	printf("\nstr : '%s'\n", str);
	printf("Output ft_atoi(str) => '-123' : '%d'\n", ft_atoi(str));

    char    str1[] = "     ---+---+1234ab567";

    printf("\nstr1 : '%s'\n", str1);
    printf("Output ft_atoi(str1) => '1234' : '%d'\n", ft_atoi(str1));

    char    str2[] = "123";

    printf("\nstr2 : '%s'\n", str2);
    printf("Output ft_atoi(str2) => '123' : '%d'\n", ft_atoi(str2));

    char    str3[] = "abc";

    printf("\nstr3 : '%s'\n", str3);
    printf("Output ft_atoi(str3) => '0' : '%d'\n", ft_atoi(str3));

    char    str4[] = "";

    printf("\nstr4 : '%s'\n", str4);
    printf("Output ft_atoi(str4) => '0' : '%d'\n", ft_atoi(str4));



	return (0);
}
