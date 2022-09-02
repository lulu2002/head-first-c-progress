#include "stdio.h"
#include "string.h"

void print_reverse(char arr[]) {
    size_t len = strlen(arr);
    char *char_pointer = arr + len - 1;

    while (char_pointer >= arr) {
        printf("%c", *char_pointer);

        char_pointer--;
    }

    puts("");

}

int main() {
    char str[] = "Hello World";
    print_reverse(str);
}