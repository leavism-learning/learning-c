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

    // Double quotes are used for string literals
    // Single quotes are for chars
    char vowels[1][5] = {
            {'a', 'e', 'i', 'o', 'u'}
    };

    // The first index of a 2D array doesn't need to be explicitly stated
    // The compiler will know how many are coded
    // However the second index needs to be explicitly stated
    int twoDArray[][4] = {
            {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
            {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
            {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };

    // Funny thing is
    // The inside curley brackets are optional.
    // The following line also makes a 2D array
    int singleLineTwoDArray[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    printf("Cell index [1][3] of singleLineTwoDArray %d\n", singleLineTwoDArray[1][3]);

    /* TODO: declare the 2D array grades here */
    int grades[1][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }
        average = average / 5;

        /* TODO: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
    return 0;
}