#include "encrypt.h"

void encrypt(char *messages) {
    while (*messages) {
        *messages = *messages ^ 31;
        messages++;
    }
}