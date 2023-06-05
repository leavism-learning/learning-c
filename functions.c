//
// Created by Huy Dang on 6/5/23.
//

#include <printf.h>

int foo(int bar);
void print_big(int x);
int runner();


int functions_main() {
    printf("%d\n", foo(6));
    int array[] = { 1, 11, 2, 22, 3, 33 };
    int i;
    for (i = 0; i < 6; i++) {
        print_big(array[i]);
    }

    printf("%d\n", runner());
    printf("%d\n", runner());
    return 0;
}

int foo(int bar) {
    return bar * 2;
}

void print_big(int x) {
    if (x > 10) {
        printf("%d is big\n", x);
    }
}

int runner()
{
    static int count = 0;
    count++;
    return count;
}

// static functions can only be called inside
// the file containing it
static void fun(void) {
    printf("I am a static function.");
}