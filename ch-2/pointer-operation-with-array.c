#include "stdio.h"

int main() {
    int drinks[] = {4, 2, 3};

    //These two are the same
    printf("1st order: %i drinks\n", drinks[0]);
    printf("1st order: %i drinks\n", *drinks);

    //These two are the same
    printf("#3rd order: %i drinks\n", drinks[2]);
    printf("#3rd order: %i drinks\n", *(drinks + 2));
}