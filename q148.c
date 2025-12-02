#include <stdio.h>
#include <string.h>
struct Student {
    char name[30];
    int roll;
    int marks;
};
int main() {
    struct Student s1, s2;
    printf("Student 1 Name: ");
    scanf("%s", s1.name);
    printf("Student 1 Roll: ");
    scanf("%d", &s1.roll);
    printf("Student 1 Marks: ");
   	scanf("%d", &s1.marks);
    printf("\nStudent 2 Name: ");
    scanf("%s", s2.name);
    printf("Student 2 Roll: ");
    scanf("%d", &s2.roll);
    printf("Student 2 Marks: ");
    scanf("%d", &s2.marks);
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("\nSame\n");
    } 
    else {
        printf("\nNot Same\n");
    }
    return 0;
}
