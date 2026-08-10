#include<stdio.h>

struct employee {
    int empcode;
    char name[50];
    float sales;
};

int main() {
    struct employee e;
    int n, i;
    float total = 0, avg;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nENTER EMPLOYEE CODE: ");
        scanf("%d", &e.empcode);
        
        printf("ENTER EMPLOYEE NAME: ");
        scanf("%s", e.name);

        printf("ENTER EMPLOYEE SALES: ");
        scanf("%f", &e.sales);

        if(e.sales > 0) {
            total += e.sales;   // only add valid sales
        } else {
            printf("Sales should be positive\n");
            i--;  // repeat input for this employee
        }
    }

    avg = total / n;

    printf("\nTotal sales = %.2f", total);
    printf("\nAverage sales = %.2f", avg);

    return 0;
}