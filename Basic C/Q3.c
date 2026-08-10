#include <stdio.h>
int main(){
    int i,j,sum=0;
    int A[3][3];
    printf("ENTER ELEMENTS OF A : \n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&A[i][j]);
            }
        }
   
       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(i==0 || i==2 ||j==0 || j==2){
                    sum+=A[i][j];
                }
            }
        }  
     for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d",A[i][j]);
            }
            printf("\n");
        }
        printf("SUMM OF PERIPHERAL ELEMENTS OF MATRIX: =%d \n",sum);
        return 0;

}