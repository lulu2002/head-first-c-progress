#include "stdio.h"

void skip(char msg[]) {
    puts(msg + 6); //從 array 第 6 個元素開始抓，直到抓到 \0 結束。
}

int main() {
    char msg_from_amy[] = "Don't call me";
    skip(msg_from_amy);
}