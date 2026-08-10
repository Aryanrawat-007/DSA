// THIS IS A PROGRAM NUMBER 3 WITH THE HELP OF UDF AND THE POINTER   //


/*#include<stdio.h>
void modify(int n,int a[i]){
    int i,n;
    for(i=0;i<n;i++){
        if(*(a+i)>0){
            *(a+i)-=2;
        }
        else if (*(a+i)<0)
        {
            *(a+i)+=1;
        }   
    }
}
    int main(){
        int n,a[50],i;
        printf("ENTER NUMBER OF ELEMENTS OF ARRAY : \n");
        scanf("%d",&n);
        printf("ENTER ELEMENTS OF ARRAY : \n");
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
         modify(a,n);
         
         printf("MODIFIED ARRAY IS: \n");
         for(i=0;i<n;i++){
            printf("%d ",a[i]);
         }

    
    return 0;
        }

*/



#include <stdio.h>

void modify(int *arr, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(*(arr + i) > 0)
            *(arr + i) -= 2;
        else if(*(arr + i) < 0)
            *(arr + i) += 1;
    }
}

int main()
{
    int n, i, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    modify(arr, n);

    printf("Modified Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}     