//
// Created by Huy Dang on 6/5/23.
//

#include <stdio.h>
#include <string.h>

int string_main() {

// Read only string
    char * name = "Huy Dang";

// String that we can manipulate
    char mani_name[] = "Huy Dang";
/* same as */
    char mani_named[9] = "Huy dang";

    int age = 24;
    printf("%s is %d years old.\n", name, age);

    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

    return 0;
}
