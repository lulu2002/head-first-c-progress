#include "stdio.h"

void fortune_cookie(char msg[]) {
    printf("Message reads: %s\n", msg);
    printf("First char is: %c\n", *msg);
    printf("The quote string is stored at %p\n", msg);
    printf("msg occupies %lu bytes\n", sizeof(msg));
}


int main() {
    char quote[] = "Cookies make you fat";

    fortune_cookie(quote);
}