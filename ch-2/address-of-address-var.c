#include "stdio.h"

int main() {

    int x = 3;
    int *x_address = &x;
    int *address_of_x_address = &x_address;

    char hello[] = "Nice";

    printf("Value of x = %i\n", x);
    printf("Address of x = %p\n", x_address);
    printf("Address of x's address = %p\n", address_of_x_address);

    return 0;
}