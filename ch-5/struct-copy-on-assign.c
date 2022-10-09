#include "stdio.h"

struct structure {
    int number;
};

int main() {
    struct structure s1 = {10};
    struct structure *s1Addr = &s1;
    struct structure s2 = *s1Addr;

    s1.number = 1;

    printf("s1: %p, s1's number: %i\n", &s1, s1.number);
    printf("s2: %p, s2's number: %i\n", &s2, s2.number);
}