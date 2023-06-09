//
// Created by Huy Dang on 6/5/23.
//
typedef struct{
    int x;
    int y;
} point;

#include <stdio.h>

/* define the person struct here using the typedef syntax */
typedef struct {
    char * name;
    int age;
} person;

int struct_main() {
    point p;
    p.x = 10;
    p.y = 4;

    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);
}