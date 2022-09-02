#include "stdio.h"
#include "string.h"

char tracks[][80] = {
        "Ember",
        "Shooting Stars",
        "Good Time",
};


void find_track(char *find) {
    for (int i = 0; i < 3; ++i) {
        if (strstr(tracks[i], find))
            printf("Find: %s\n", tracks[i]);
    }
}

int main() {
    char search_for[80];

    printf("Search for: ");
    fgets(search_for, sizeof(search_for), stdin);
    search_for[strlen(search_for) - 1] = '\0';

    find_track(search_for);

    return 0;
}