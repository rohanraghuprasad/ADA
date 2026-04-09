#include<stdio.h>
int cost[10][10], visited[10], wt[10], et[10][10], n, e=0, i, j, k, u, v, m, sum=0;
void prims();

void main(){
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter cost-adjacency matrix: ");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &cost[i][j]);
        }
    }
    for(i=0; i<n; i++){
        visited[i]=0;
    }
    prims();
    printf("Minimum Spanning Tree:\n");
    for(i=0; i<n; i++){
        printf
    }
}
