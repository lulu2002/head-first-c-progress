#include "stdio.h"

void go_south_east(int *latitude_addr, int *longitude_addr) {
    *latitude_addr -= 1;
    *longitude_addr += 1;
}

int main() {
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude, &longitude);

    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);

    return 0;
}