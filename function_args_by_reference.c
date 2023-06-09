//
// Created by Huy Dang on 6/8/23.
//

#include <printf.h>


typedef struct {
    int x;
    int y;
} point;

void addOne(int *n);
void move(point *p);

void addOne(int *n) {
    (*n)++;
}

void move(point * p) {
    (*p).x++;
    (*p).y++;
}

int reference_main() {
    int val = 0;
    addOne(&val);
    printf("%d\n", val);

    point me;
    me.x = 10;
    me.y = 0;

    move(&me);
    printf("%d\n", me.x);
    printf("%d\n", me.y);

    return 0;
}