#include <stdio.h>

#include "list.h"

int main(void) {
    Node head1 = create_node(1, NULL);
    Node node = create_node(2, NULL);
    head1 = add_node_to_list(head1, node);
    print_list(head1);

    Node head2 = create_node(10, NULL);
    Node node2 = create_node(9, NULL);
    head2 = add_node_to_list(head2, node2);
    print_list(head2);

    head1 = list_append(head1, head2);
    print_list(head1);

    return 0;
}