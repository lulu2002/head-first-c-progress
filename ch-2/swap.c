#include "stdio.h"


void swap_array() {
    char str[] = "ABC";

    printf("str[0] (%p) = %c\n", &str[0], str[0]);
    printf("str[1] (%p) = %c\n", &str[1], str[1]);

    puts("Swap by value");
    str[0] = str[1];

    printf("str[0] (%p) = %c\n", &str[0], str[0]);
    printf("str[1] (%p) = %c\n", &str[1], str[1]);

    puts("Array can't be swap by pointer");
}

int main() {

    char a = 'A';
    char b = 'B';

    char *str[] = {&a, &b};


}