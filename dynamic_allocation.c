//
// Created by Huy Dang on 6/8/23.
//
#include <stdlib.h>
#include <printf.h>

typedef struct {
    char * name;
    int age;
} person;



int main() {
    person * myPerson = (person *) malloc(sizeof(person));
    myPerson->name = "Huy";
    myPerson->age = 12;

    printf("Name: %s\n", myPerson->name);

    free(myPerson);

//    printf("Name: %s", myPerson->name);
    return 0;
}