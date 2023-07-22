char* ft_strncpy(char *dest, const char *src, size_t n) {
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    // If the source string is shorter than 'n', fill the remaining space with null characters
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/*
#include <stdio.h>

int main() {
    char dest[10];
    const char *src = "Hello, world!";
    
    strncpy_custom(dest, src, 9);
    printf("%s\n", dest); // Output: Hello, wo

    return 0;
}
*/