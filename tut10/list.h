/**
 * This file is the header file for the
 * linked list ADT.
 */

typedef struct node *Node;

/**
 * This function takes in the values for
 * the new node and returns a pointer to 
 * a new node.
 */
Node create_node(int data, Node next);


/**
 * Adds the node node to the end of the list
 * pointed to by head. Returns a pointer to
 * the head of the list.
 */
Node add_node_to_list(Node head, Node node);

/**
 * Prints the list.
 */
void print_list(Node head);

/**
 * Combines two linked lists together.
 * Basically sticks list pointed to by head2
 * to the end of list pointed to by head1.
 */
Node list_append(Node head1, Node head2);