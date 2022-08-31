#include <stdio.h>

int y = 1;

int main() {
    int x = 4;
    int *address_of_x = &x;

    // These two are the same value
    // & 可以獲得 變數的 位址 -> 參考
    printf("%p\n", &x);
    printf("%p\n", address_of_x);

    // * 可以解析 位址 儲存的變數 是什麼 -> 解參考
    int value_store_in_address = *address_of_x;

    printf("%i\n", value_store_in_address);

    // 把 參考 和 解參考 放在一起 4 -> addr -> 4 繞一圈~
    printf("%i\n", *&x);


    return 0;
}