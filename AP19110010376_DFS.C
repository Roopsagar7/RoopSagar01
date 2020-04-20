#include<stdio.h>
void DFS(int);
int A[10][10],visited[10]={0},n;
void main()
{
int i,j;
printf("Enter number of vertices: ");
scanf("%d",&n);
printf("\nEnter adjacency matrix of Graph : ");
for(i=0;i<n;i++)
{
for(j=0;j,n;j++)
scanf("%d",&A[i][j]);
}
DFS(0);
}
void DFS(int i)
{
int j;
printf("\n%d",i);
visited[i]=1;
for(j=0;j<n;j++)
if(!visited[j]&&A[i][j]==1)
DFS(j);
}
