//
// Created by Huy Dang on 6/8/23.
//
#include <stdlib.h>
#include <printf.h>

typedef struct {
    char * name;
    int age;
} person;

typedef struct {
    int x;
    int y;
} point;

int main() {
    person * myPerson = (person *) malloc(sizeof(person));
    myPerson->name = "Huy";
    myPerson->age = 12;

    printf("Name: %s\n", myPerson->name);

    free(myPerson);

//    printf("Name: %s", myPerson->name);

    point * myPoint = NULL;
    myPoint = (point *) malloc(sizeof(point));

    myPoint->x = 10;
    myPoint->y = 5;
    printf("myPoint Coords: %d, %d\n", myPoint->x, myPoint->y);

    free(myPoint);
    return 0;
}