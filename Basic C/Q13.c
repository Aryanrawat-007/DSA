#include<stdio.h>
#include<math.h>
int main(){
    int a[100],i,j,n,*p;
    float sd,sum=0,mean;
    printf("ENTER A NUMBER: \n");
    scanf("%d",&n);
    p=a;
    printf("ENTER ELEMENTS OF ARRAY: \n");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    mean =1.0*sum/n;

    for(i=0;i<n;i++){
        sd=pow(*(p+i)-mean,2);
    }
    sd=sd/n;
    sd=sqrt(sd);
    printf("STANDARD DEVIATION =%f",sd);
    printf("MEAN =%f",mean);
    return 0;
}