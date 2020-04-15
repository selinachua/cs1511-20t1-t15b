/**
 * This week we learned about structs and linked
 * lists.
 */

#include <stdio.h>
#include <stdlib.h>

// TODO: Create a struct student
struct student {
    char *name;
    int zid;
    double mark;
};

#define LENGTH 10

typedef int Number;
typedef struct student Student;
typedef struct student *StudentP;

struct student *create_student(char *name, int zid, double mark);
void change_name(struct student *stu, char *new_name);

int main(void) {
    StudentP student1 = create_student("Selina", 555555, 60.0);
    printf("Name: %s\n", student1->name);
    printf("zID: %d\n", student1->zid);
    printf("Mark: %f\n", student1->mark);
    
    change_name(student1, "Hello");

    printf("Name after: %s\n", student1->name);

    return 0;
}

struct student *create_student(char *name, int zid, double mark) {
    struct student *new = malloc(sizeof(struct student));
    new->name = name;
    new->zid = zid;
    new->mark = mark;
    return new;
}

// struct student create_student(char *name, int zid, double mark) {
//     struct student new;
//     new.name = name;
//     new.zid = zid;
//     new.mark = mark;
//     return new;
// }

void change_name(struct student *stu, char *new_name) {
    stu->name = new_name;
}
