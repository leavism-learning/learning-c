//
// Created by Huy Dang on 6/5/23.
//
// a pointer is a simple integer variable
// that holds a memory address that points to
// a value, instead of holding the actual value itself

#include <printf.h>

// The computer's memory is a sequential store of data,
// and a pointer points to a specific part of the memory

int main() {
    char * name = "John";
    int i;

    for (i = 0; i < 4; i ++) {
        printf("%c : ", name[i]);
        printf("%p\n", &name[i]);
    }

    int n = 10;
    /* your code goes here */
    int * pointer_to_n = &n;
    *pointer_to_n += 1;
    /* testing code */
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;

    printf("Done!\n");

    char vowels[] = { 'A', 'E', 'I', 'O', 'U'};
    char * ptr_vowels = vowels;
    int j;

    for (j = 0; j < 5; j++) {
        printf("&vowels[%d]: %p | ptr_vowels + %d: %p | vowels + %d: %p\n", j, &vowels[j], j, ptr_vowels + j, j, vowels + j);
    }

    for (j = 0; j < 5; j++) {
        printf("vowels[%d]: %c | *(ptr_vowels + %d): %c | *(vowels + %d): %c\n", j, vowels[j], j, *(ptr_vowels + j), j, *(vowels + j));
    }

    return 0;
}