#include<stdio.h>
int A[20][20],q[20]={0},n,visited[20]={0},i,j,f=0,r=-1;
void BFS(int v)
{
for(i=0;i<n;i++)
if(A[v][i]&&visited[i]==0)
q[++r]=i;
if(f<=r)
{
visited[q[f]]=1;
BFS(q[f++]);
}
}
void main()
{
int v;
printf("Enter number of vertices: ");
scanf("%d",&n);
printf("\nEnter Graph data in matrix form :\n ");
for(i=0;i<n;i++)
{
for(j=0;j,n;j++)
scanf("%d",&A[i][j]);
}
printf("\nEnter the start vertex: ");
scanf("d",&v);
BFS(v);
printf("\nReachable nodes are : ");
for(i=0;i<n;i++)
{
if(visited[i])
printf("%d\t",i);
else{
printf("Unable to reach all nodes.BFS impossible");
break;
  }
 }
}
