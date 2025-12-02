#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s[50], topper;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    topper = s[0];

    
    for (i = 1; i < n; i++) {
        if (s[i].marks > topper.marks) {
            topper = s[i];
        }
    }

    
    printf("\nTopper: %s (Marks: %d)\n", topper.name, topper.marks);

    return 0;
}
