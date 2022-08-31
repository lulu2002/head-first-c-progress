#include <stdlib.h>
#include <stdio.h>

int main() {
    char card_name[3];
    int count = 0;

    do {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);

        int val;

        switch (card_name[0]) {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                continue;
            default:
                val = atoi(card_name);

                if (!(val >= 1 && val <= 10)) {
                    puts("Invalid number, please correct it and type again.");
                    continue;
                }
        }

        if (val == 10)
            count++;
        else if (val >= 3 && val <= 6)
            count--;

        printf("Current count: %i\n", count);

    } while (card_name[0] != 'X');

    return 0;
}