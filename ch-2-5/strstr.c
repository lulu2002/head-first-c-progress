#include "stdio.h"
#include "string.h"

int main() {
    char s0[] = "Hello World";
    char s1[] = "World";

    if (strstr(s0, s1))
        printf("%s contains %s\n", s0, s1);

    return 0;
}