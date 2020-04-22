/**
 * This week we'll cover header files and ADTs.
 */

#include <stdio.h>
#include <stdlib.h>

#include "list_exercises.h"

struct node {
    int val;
    struct node *next;
};

int main(void) {
    // 1 -> 2 -> 3 -> X
    Node head1 = create_node(1, NULL);
    head1->next = create_node(3, NULL);
    head1->next->next = create_node(3, NULL);
    head1->next->next->next = create_node(5, NULL);
    head1->next->next->next->next = create_node(7, NULL);
    print_list(head1);

    // 1 -> 2 -> 3 -> X
    Node head2 = create_node(2, NULL);
    head2->next = create_node(3, NULL);
    head2->next->next = create_node(3, NULL);
    head2->next->next->next = create_node(7, NULL);
    head2->next->next->next->next = create_node(8, NULL);
    print_list(head2);

    Node intersection = set_intersection(head1, head2);
    print_list(intersection);

    // int identical = is_identical(head1, head2);
    // printf("%d\n", identical);

    // Node new_head = list_copy(head1);
    // print_list(new_head);

    // delete_second_node(head1);
    // print_list(head1);
    
    // 10 -> 9 -> 8 -> X
    // Node head2 = create_node(10, NULL);
    // head2->next = create_node(9, NULL);
    // head2->next->next = create_node(8, NULL);
    // print_list(head2);

    // Node new_head = list_append(head1, head2);
    // print_list(new_head);

    return 0;
}

Node set_intersection(Node head1, Node head2) {
    Node new_head = NULL;
    Node new_tail = NULL;

    Node curr1 = head1;
    Node curr2 = head2;
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->val > curr2->val) {
            // iterate curr 2
            curr2 = curr2->next;
        } else if (curr1->val < curr2->val) {
            // iterate curr 1
            curr1 = curr1->next;
        } else {
            // create a copy and attach to new list.
            Node new = create_node(curr1->val, NULL);
            // First time adding to the new list.
            if (new_head == NULL) {
                new_head = new;
                new_tail = new;
            } else if (curr1->val != new_tail->val) {
                new_tail->next = new;
                new_tail = new_tail->next;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
    }
    return new_head;
}

int is_identical(Node head1, Node head2) {
    Node curr1 = head1;
    Node curr2 = head2;
    while (curr1 != NULL && curr2 != NULL) {
        if (curr1->val != curr2->val) {
            return FALSE;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    // We've reached the end of either list1 or list2.
    // if (curr1 == NULL && curr2 == NULL) {
    //     return TRUE;
    // } else {
    //     return FALSE;
    // }
    // ternary operator -> condition ? true : false
    return (curr1 == NULL && curr2 == NULL) ? TRUE : FALSE;
}

/**
 * Create a copy of a list.
 */
Node list_copy(Node head) {
    Node new_head = create_node(head->val, NULL);
    Node new_tail = new_head;
    Node curr1 = head->next;
    while (curr1 != NULL) {
        // Create a new copy of that node
        Node new = create_node(curr1->val, NULL);
        // Make new tail point to new node
        new_tail->next = new;
        new_tail = new_tail->next;
        curr1 = curr1->next;
    }
    return new_head;
}

/**
 * Delete the second node in a linked list.
 */
void delete_second_node(Node head) {
    if (head == NULL) {
        return;
    }
    Node second = head->next;
    if (second == NULL) {
        return;
    }
    head->next = second->next;
    free(second);
}

/**
 * Appends two lists together.
 */
Node list_append(Node head1, Node head2) {
    if (head1 == NULL || head2 == NULL) {
        return NULL;
    }
    // Iterate to the end of head1.
    Node curr = head1;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = head2;
    return head1;
}

/**
 * Prints out a list in the form of
 * 1 -> 2 -> 3 -> X
 */
void print_list(Node head) {
    if (head == NULL) {
        return;
    }
    Node curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->val);
        curr = curr->next;
    }
    printf("X\n");
}

/**
 * Creating a new node with val and next.
 */
Node create_node(int val, Node next) {
    // Node and struct node
    Node new = malloc(sizeof(struct node));
    if (new == NULL) {
        return NULL;
    }
    new->val = val;
    new->next = next;
    return new;
}