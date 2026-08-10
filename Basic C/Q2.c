#include <stdio.h>

int main(){
    int i, j;
    int A[3][3], B[3][3], C[3][3];

    printf("ENTER ELEMENTS OF MATRIX A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("MATRIX A:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("ENTER ELEMENTS OF MATRIX B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &B[i][j]);
        }
    }

    printf("MATRIX B:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Subtraction: C = B - A
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            C[i][j] = B[i][j] - A[i][j];
        }
    }

    printf("RESULTANT MATRIX (B - A):\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}