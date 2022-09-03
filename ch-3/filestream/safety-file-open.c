#include "stdio.h"

int main() {
    // 嘗試存取沒權限的文件
    FILE *file_wont_able_to_open = fopen("/hello.txt", "r");

    if (!file_wont_able_to_open) {
        fprintf(stderr, "Could not open file.\n");
        return 2;
    }
}