#include <unistd.h>

void print_combination(char *combination, int length) {
    write(1, combination, length);
    write(1, ", ", 2);
}

void generate_combinations(char *combination, int prev, int n, int length) {
    if (n == length) {
        print_combination(combination, length);
        return;
    }

    for (int i = prev + 1; i <= 9; i++) {
        combination[n] = '0' + i;
        generate_combinations(combination, i, n + 1, length);
    }
}

void print_remaining(int start) {
    char c;

    for (int i = start; i <= 9; i++) {
        c = '0' + i;
        write(1, &c, 1);
    }
}

void ft_print_combn(int n) {
    if (n < 1 || n > 9) {
        return;
    }

    char combination[10];
    generate_combinations(combination, -1, 0, n);
    print_remaining(10 - n);
}