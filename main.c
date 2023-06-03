#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    int a=0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("a = b - c + d * e = %d\n", a);

    return 0;
}