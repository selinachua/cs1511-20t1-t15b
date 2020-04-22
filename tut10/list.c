/**
 * This file contains the implementation for a 
 * linked list ADT.
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "list.h"

struct node {
    int data;
    struct node *next;
};

Node create_node(int data, Node next) {
    Node new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = data;
    new->next = next;
    return new;
}

Node add_node_to_list(Node head, Node node) {
    if (!head) {
        return node;
    }
    Node curr = head;
    while (curr->next) {
        curr = curr->next;
    }
    curr->next = node;
    return head;
}

void print_list(Node head) {
    Node curr = head;
    while (curr) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

Node list_append(Node head1, Node head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    
    Node curr1 = head1;
    while (curr1->next) {
        curr1 = curr1->next;
    }
    curr1->next = head2;
    return head1;
}