#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


void ft_putstr(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

void ft_putchar(char c); 
void ft_print_alphabet(); 
void ft_print_reverse_alphabet();
void ft_print_numbers();
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_comb2(void);
void ft_putnbr(int num);
void ft_print_combn(int n);
void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
int ft_div_mod(int a, int b);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);
char* ft_strcpy(char *dest, const char *src);
char* ft_strncpy(char *dest, const char *src);
int    ft_str_is_alpha(char *str);

// '\0' is stopping character
int main()
{

    char dest[10];
    const char *src = "Hello, world!";
    
    ft_strncpy(dest, src, 9);
    printf("%s\n", dest); // Output: Hello, wo

    char ExitMsg[] = "\nPress Enter to exit...";
    ft_putstr(ExitMsg);
    getchar(); // Wait for user input
    return 0;
}
