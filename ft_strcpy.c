char* ft_strcpy(char *dest, const char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
    {
        i++;
    }
    return dest;
}

/*
#include <stdio.h>

char* ft_strcpy(char *dest, const char *src);

int main()
{
            char src[] = "Hello, World!";
            char dest[20];

            printf("Original string: %s\n", src);

            printf("Copied string: %s\n", ft_strcpy(dest, src));

    return 0;
}       
x                       x   
*/