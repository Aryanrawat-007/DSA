#include<stdio.h>
int main(){
    int i,n,a[50],sum=0;
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY");
    scanf("%d",&n);
    printf("ENTER ELEMENTS OF ARRAY :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("ELEMENT OF ARRAY IS:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("OUTPUT ARRAY: \n");
    for(i=0;i<n;i++){
        if(a[i]==0){
            printf("0 ");
        }
        else if (a[i]<0)
        {
            sum+=a[i];
            printf("%d ",sum);
        }
        else{
            printf("%d ",a[i]-2);
     }
    }
return 0;
} 