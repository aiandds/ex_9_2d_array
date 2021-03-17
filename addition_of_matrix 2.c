#include<stdio.h>

int main()
{
    int x[10][10],y[10][10],add[10][10],i,j,r,c;
    printf("Enter No of rows and columns:\n");
    scanf("%d%d",&r,&c);
    printf("Enter first matrix elements:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       scanf("%d",&x[i][j]);
      }
    }
    printf("Enter second matrix elements:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
       scanf("%d",&y[i][j]);
      }
    }   
    printf("Addition of two matrix:\n");
    for(i=0;i<r;i++)
    {  
      for(j=0;j<c;j++)
      {
       add[i][j] = x[i][j]+y[i][j];
       printf("%d ",add[i][j]);
      }
       printf("\n");
    }
    printf("\n");
}