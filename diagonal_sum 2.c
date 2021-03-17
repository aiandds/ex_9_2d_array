#include<stdio.h>
int main()
{
  int i,j,row,col,a[10][10],sum=0;
  printf("Enter no of rows and columns:\n");
  scanf("%d%d",&row,&col);

  printf("Enter the Matrix Elements:\n");
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
     {
       scanf("%d",&a[i][j]);
     }
  }
  for(i=0;i<row;i++)
     {
       sum = sum + a[i][i];
     }
  printf ("\nThe sum of Diagonal elements of a matrix = %d\n",sum);
  return 0;
}