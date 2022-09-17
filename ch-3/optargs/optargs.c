#include "stdio.h"
#include "unistd.h"

int main(int argc, char *argv[]) {

    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF) {
        switch (ch) {
            case 'd':
                delivery = optarg;
                break;
            case 't':
                thick = 1;
                break;
            default:
                fprintf(stderr, "Unknown option: %s\n", optarg);
                return 1;
        }
    }

    argc -= optind;
    argv += optind;

    if (thick)
        puts("Think crust");

    if (delivery[0])
        printf("To be delivered: %s.\n", delivery);

    puts("Ingredients:");

    for (int i = 0; i < argc; ++i)
        puts(argv[i]);

    return 0;
}