//
// Created by Huy Dang on 6/5/23.
//

#include <stdio.h>

int main() {

// Read only string
    char * name = "Huy Dang";

// String that we can manipulate
    char mani_name[] = "Huy Dang";
/* same as */
    char mani_named[9] = "Huy dang";

    int age = 24;
    printf("%s is %d years old.\n", name, age);

    return 0;
}
