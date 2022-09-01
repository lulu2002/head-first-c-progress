#include "stdio.h"

void you_cant_change_constant_array() {
    char *const_arr = "ABC";
    char changeable_arr[] = "ABC";

    changeable_arr[2] = changeable_arr[1];
    puts("changeable arr changed.");
    const_arr[1] = const_arr[2];
    puts("const arr changed.");
}

void const_char_explained() {
    char *arr1 = "ABC";
    char *arr2 = "ABC";
    char arr3[] = "ABC";

    printf(
            "since constant char are store at same pointer, "
            "so arr1[1]'s addr -> %p should equals to arr2[1]'s -> %p."
            "But arr3 were not const arr, so it's addr should be different -> %p\n",
            &arr1[1], &arr2[1], &arr3[1]
    );
}

void where_const_keyword_comes_in() {
    /**
     * in some case you defined an array with const chars,
     * just add const keyword to it, prevent others from accidentally
     * doing changes on it and cause program crashes.
     */

    const char *arr = "ABC";

    /**
     * compiler will prevent you from doing this with const variables.
     */
//    arr[1] = arr[2];
}

int main() {

}