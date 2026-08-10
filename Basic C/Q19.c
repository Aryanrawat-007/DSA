#include <stdio.h>

// Structure definition
struct employee {
    char name[50];
    int empcode;
    float salary;
};

// Function to display employee details
void display(struct employee e) {
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("Employee Code: %d\n", e.empcode);
    printf("Salary: %.2f\n", e.salary);
}

int main() {
    struct employee e;

    // Input
    printf("Enter employee name:\n");
    scanf("%s", e.name);

    printf("Enter employee code:\n");
    scanf("%d", &e.empcode);

    printf("Enter salary:\n");
    scanf("%f", &e.salary);

    // Function call
    display(e);

    return 0;
}