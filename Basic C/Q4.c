#include <stdio.h>
#include <string.h>
int main(){
    char names[10][12];
    char search[10];
    int i,flag=0;
    printf("ENTER 3 NAMES : \n");
    for(i=0;i<3;i++){
        scanf("%s",names[i]);
    }
    
    printf("SEARCH FOR A NAMES : \n");
    scanf("%s",&search);
    for(i=0;i<3;i++){
        if (strcmp(names[i],search)==0){
            flag =1;
            break;
        }
    }
    if (flag==1){
        printf("NAME IS FOUND :");
    }
    else
    printf("NAME NOT FOUND :");

    return 0;

}



/*
           ┌───────────┐
           │   START   │
           └─────┬─────┘
                 │
         ┌───────▼────────┐
         │ Declare names, │
         │ search, i,     │
         │ flag = 0       │
         └───────┬────────┘
                 │
        ┌────────▼─────────┐
        │ Enter 3 Names    │
        └────────┬─────────┘
                 │
        ┌────────▼─────────┐
        │ Enter Name to    │
        │ Search           │
        └────────┬─────────┘
                 │
           ┌─────▼─────┐
           │  i = 0    │
           └─────┬─────┘
                 │
           ┌─────▼─────┐
           │  i < 3 ?  │◄────────────┐
           └───┬───┬───┘             │
               │Yes│No               │
               │   │                 │
       ┌───────▼───┘         ┌───────▼────────┐
       │ names[i] == search? │  flag == 1 ?   │
       └───┬───────────┬─────┘
           │Yes        │No
           │           │
     ┌─────▼─────┐  ┌──▼──────┐
     │ flag = 1  │  │ i = i+1 │
     └─────┬─────┘  └──┬──────┘
           │            │
           └────────────┘
                (loop)

        ┌───────────┬───────────┐
        │Yes                    No
 ┌──────▼────────┐      ┌───────▼────────┐
 │ Print NAME    │      │ Print NAME     │
 │ IS FOUND      │      │ NOT FOUND      │
 └──────┬────────┘      └───────┬────────┘
        │                       │
        └───────────┬───────────┘
                    │
              ┌─────▼─────┐
              │    END    │
              └───────────┘

              */