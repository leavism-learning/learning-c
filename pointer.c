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
    return 0;
}