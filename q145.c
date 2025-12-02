#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};


struct Student findTopper(struct Student s[], int n) {
    struct Student top = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }
    return top;   
}

int main() {
    struct Student s[50], topper;
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    
    topper = findTopper(s, n);

    
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
