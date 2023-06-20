//
// Created by Huy Dang on 6/21/23.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    struct node * next;
} node;

int main() {
    node * head = NULL;
    head = (node *) malloc(sizeof(node));

    if (head == NULL) { return 1; }
    

    return 0;
}