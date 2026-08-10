#include <stdio.h>

int main() {
    int m, n, i, j,flag=0;

    printf("No of rows: ");
    scanf("%d", &m);

    printf("No of columns: ");
    scanf("%d", &n);

    int A[m][n];   // Declare after input

    printf("Enter elements of matrix:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrix is:\n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(i>j){
                if(A[i][j]!=0){
                    flag = 1;
                    break;
                }
            }
        }
       
    }
    if(flag==0){
        printf("UPPER TRIANGULAR");
    }
    else
    printf("LOwer triangular");
    

    return 0;
}