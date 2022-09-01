#include "stdio.h"

void simple() {
    char name[40];
    puts("Enter your name: ");
    scanf("%39s", name); //這邊傳入的是 name[] array 的指標，scanf 可以將輸入的字元塞到 array 的位址當中來更新數值
    printf("Your Name: %s\n", name);
}

void full_name() {
    char first_name[20];
    char last_name[20];

    printf("Enter first and last name: ");
    scanf("%19s %19s", first_name, last_name);

    printf("First: %s, Last: %s\n", first_name, last_name);
}

void overflow_scanf() {
    char food[5];

    printf("Enter favorite food (overflow when words > 5): ");
    scanf("%s", food);

    printf("Favorite food: %s\n", food);
}

int main() {
    overflow_scanf();
    return 0;
}