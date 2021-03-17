#include<stdio.h>

int main()
{
    int r,c,a,b,i,j,k,sum=0;
    int first[10][10],second[10][10], multiply[10][10];
    printf("Enter no of rows and columns of first matrix:\n"); 
    scanf("%d %d",&r,&c);
    printf("Enter elements of first matrix\n");
    for (i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
          scanf("%d",&first[i][j]);
      }
    }

    printf("Enter no of rows and columns of second matrix:\n");
    scanf("%d%d",&a,&b);
    
    if (c!=a)
     printf("Not possible\n");
    else
   {
     printf("Enter elements of second matrix:\n");
     for(i=0;i<a;i++)
     {
        for(j=0;j<b;j++)
        {
            scanf("%d",&second[i][j]);
        }
         
     }
       
       
     for (i=0;i<r;i++)
     {
       for(j=0;j<b;j++)
       {
         for(k=0;k<a;k++)
         {
           sum = sum + first[i][k]*second[k][j];
         }
         multiply [i][j] = sum;
         sum =0;
       }
     }
     printf("Product of the matrices:\n");
    
     for(i=0;i<r;i++)
     {
       for(j=0;j<b;j++)
         printf ("%d\t", multiply [i][j]);
       printf("\n");
     }
   }
   return 0;
}
      