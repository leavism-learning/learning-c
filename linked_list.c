//
// Created by Huy Dang on 6/21/23.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node;

int main() {
    node * head = NULL;
    head = (node *) malloc(sizeof(node));
    head->val = 1;
    head->next = (node *) malloc(sizeof(node));
    
    head->next->val = 2;
    head->next->next = NULL;

    return 0;
}