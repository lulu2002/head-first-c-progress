#include "stdio.h"
#include "string.h"

int main(int argc, char *argv[]) {

    if (argc < 6) {
        fprintf(stderr, "You need at least 5 args.");
        return 1;
    }

    char line[80];
    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *others_file = fopen(argv[5], "w");

    while (fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, argv[1]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[3]))
            fprintf(file2, "%s\n", line);
        else
            fprintf(others_file, "%s\n", line);
    }

    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(others_file);
}