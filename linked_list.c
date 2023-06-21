//
// Created by Huy Dang on 6/21/23.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node;

void print_list(node * head);

void print_list(node * head) {
    node * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int main() {
    node * head = NULL;
    head = (node *) malloc(sizeof(node));
    head->val = 1;
    head->next = (node *) malloc(sizeof(node));

    head->next->val = 2;
    head->next->next = NULL;

    return 0;
}

