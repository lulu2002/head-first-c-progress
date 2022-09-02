#include "stdio.h"

int main() {
    char a = 'A';
    char b = 'B';
    // 指標陣列，裡面儲存的是字串的 pointer (pointer of index 0)
    char *names[] = {"Jerry", "Datou", "LuLu"};
    // 意外吧！這是同樣意思~
    char *str[] = {&a, &b};

    int num1 = 1;
    int num2 = 2;
    int *numPointerArr[] = {&num1, &num2};

    printf("%s", names[0]); //很容易混淆的地方不外乎: 1. char arr 的參數可當 pointer，每個字串都是 char arr
    printf("%i", *numPointerArr[0]);
}