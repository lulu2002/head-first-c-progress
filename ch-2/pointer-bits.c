#include "stdio.h"

int main() {
    int nums[] = {1, 2, 3};

    printf("nums (nums[0]) is at %p\n", nums);
    printf("nums +1 is at %p\n", nums + 1); // == &nums + 1
    printf("這兩個相差 4 bits，因為 sizeOf int == %lu\n", sizeof(int));

    return 0;

}