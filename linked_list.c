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
void push(node * head, int val);
void push_head(node ** head, int val);
int pop(node ** head);

void print_list(node * head) {
    node * current = head;
    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push(node * head, int val) {
    node * current = head;
    while (current != NULL) {
        current = current->next;
    }
    current->next = (node *) malloc(sizeof(node));
    current->next->val = val;
    current->next->next = NULL;
}

void push_head(node ** head, int val) {
    node * new_head;
    new_head = (node *) malloc(sizeof(node));
    new_head->val = val;
    new_head->next = *head;
    *head = new_head;
}

int pop(node ** head) {
    int return_val = -1;
    node * next_node = NULL;

    if (*head == NULL) { return -1; }

    next_node = (*head)->next;
    return_val = (*head)->val;
    free(*head);
    *head = next_node;

    return return_val;
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

