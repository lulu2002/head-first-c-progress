#include <stdlib.h>
#include <stdio.h>

int main() {
    char card_name[3];

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
        default:
            val = atoi(card_name);
    }

    if (val == 10)
        puts("Count has gone up");
    else if (val >= 3 && val <= 6)
        puts("Count has gone down");

    return 0;
}