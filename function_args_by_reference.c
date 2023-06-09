//
// Created by Huy Dang on 6/8/23.
//

#include <printf.h>

void addOne(int *n) {
    (*n)++;
}

int main() {
    int val = 0;
    addOne(&val);
    printf("%d\n", val);
    return 0;
}