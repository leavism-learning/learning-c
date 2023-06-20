//
// Created by Huy Dang on 6/21/23.
//

#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y);
unsigned int factorial(unsigned int x);

unsigned int multiply(unsigned int x, unsigned int y) {
    if (x == 1) {
        return y;
    } else if (x > 1) {
        return y + multiply(x - 1, y);
    }

    return 0;
}

unsigned int factorial(unsigned int x) {
    if (x <= 1) { return 1; }
    else { return x * factorial(x-1); }
}

int recursion_main() {
    printf("3 time 5 is %d\n", multiply(3,5));    int num = 5;
    printf("%d! = %d", num, factorial(num));

    return 0;
}