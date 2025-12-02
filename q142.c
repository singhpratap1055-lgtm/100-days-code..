#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");

    
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    printf("\n--- List of Students ---\n");
    printf("Name\t\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t\t%d\t%d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
