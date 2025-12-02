#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Name: ");
    scanf("%s", st.name);

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Marks: ");
    scanf("%d", &st.marks);

    
    printStudent(st);

    return 0;
}
