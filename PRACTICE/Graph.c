#include<stdio.h>
int graph[10][10],n,visited[10];
void DFS(int v){
    printf("%d",v);
    visited[v]=1;
    for(int i=0;i<n;i++){
        if(graph[v][i]==1 && visited[i]==0){
            DFS(i);
        }
    }
}
void BFS(int start){
    int queue[10],front=0,rear=0;
    for(int i=0;i<n;i++){
      visited[i]=0;
      queue[rear++]=start;
      visited[start]=1
    }
      while(front<rear){
        int v=queue[front++];
        printf("%d",v);

        for(int i=0;i<n;i++){
            if(graph[v][i]==1 && visited[i]==0){
                queue[rear++]=i;
                visited[i]=1;
            }
        }
      }
}
int main(){
    int graph[100][100];
    int n,u,e,v;
    printf("ENTER VERICES:");
    scanf("%d",&n);
    printf("ENTER EDGES:");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("EDGES:");
        scanf("%d %d",&u ,&v);

        graph[u][v]=1;
        graph[v][u]=1;
    }

    printf("ADJECNCY MATRIXES:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d",graph[i][j]);
                printf("\n");
            }
        }return 0;
    }
