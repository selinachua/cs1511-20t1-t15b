/**
 * This is the header file for list exercises.
 * - typedefs
 * - #defines
 * - function declarations
 * ABSTRACT DATA TYPE
 */

#define TRUE    1
#define FALSE   0

typedef struct node *Node;

/**
 * Returns a new list with intersecting values within
 * list1 and list2. e.g.:
 * list1 : 1 -> 5 -> 7 -> 9 -> X
 * list2 : 2 -> 5 -> 6 -> 7 -> 8 -> 9 -> X
 * intersection : 5 -> 7 -> 9 -> X
 */
Node set_intersection(Node head1, Node head2);

/**
 * Check if two lists are identical.
 * list1 : 1 -> 2 -> 3 -> X
 * list2 : 1 -> 2 -> 3 -> X
 */
int is_identical(Node head1, Node head2);


Node list_copy(Node head);

void delete_second_node(Node head);

Node list_append(Node head1, Node head2);

Node create_node(int val, Node next);

void print_list(Node head);
