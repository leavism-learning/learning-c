#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    int a=0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("a = b - c + d * e = %d\n", a);


    int numbers[5];
    int sum = 0;
    numbers[0] = 1;
    numbers[1] = 3;
    numbers[2] = 4;
    numbers[3] = 10;
    numbers[4] = 25;
    sum = numbers[0] + numbers[3];
    printf("1 + 10 = %d\n", sum);

    return 0;
}