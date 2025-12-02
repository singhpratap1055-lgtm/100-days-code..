#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    struct Date join;   
};

int main() {
    struct Employee e;

    
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
