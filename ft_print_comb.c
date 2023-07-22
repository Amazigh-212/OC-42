#include <unistd.h>
#include <string.h>

void ft_print_comb()
{
	int i, j, k;
    char buffer[3];
    
    for (i = 0; i <= 7; i++) {
        for (j = i + 1; j <= 8; j++) {
            for (k = j + 1; k <= 9; k++) {
                buffer[0] = i + '0';
                buffer[1] = j + '0';
                buffer[2] = k + '0';
                write(1, buffer, 3);
                write(1, " ", 1);
            }
        }
    }
}