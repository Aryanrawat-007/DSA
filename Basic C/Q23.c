#include<stdio.h>

struct employee {
    char name[50];
    int Empno;
    float salary;
};

int main() {
    int i, j, n;

    printf("ENTER NUMBER OF EMPLOYEES: ");
    scanf("%d", &n);

    struct employee e[n], t;  // array + temp for swapping

    // Input
    for(i = 0; i < n; i++) {
        printf("\nDETAIL OF EMPLOYEE %d\n", i + 1);

        printf("ENTER NAME: ");
        scanf("%s", e[i].name);

        printf("ENTER EMP NUMBER: ");
        scanf("%d", &e[i].Empno);

        printf("ENTER SALARY: ");
        scanf("%f", &e[i].salary);
    }

    // Sorting (Descending)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(e[j].salary < e[j + 1].salary) {
                t = e[j];
                e[j] = e[j + 1];
                e[j + 1] = t;
            }
        }
    }

    // Output
    printf("\n--- Employee Details (Sorted by Salary Descending) ---\n");
    for(i = 0; i < n; i++) {
        printf("\nEmpNo: %d", e[i].Empno);
        printf("\nName: %s", e[i].name);
        printf("\nSalary: %.2f\n", e[i].salary);
    }

    return 0;
}