#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    
    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 0;
    }

    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    
    printf("\n--- Employee Details From File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
