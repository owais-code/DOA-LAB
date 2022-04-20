///To find the product of two matrices ///
#include <stdio.h>

int main()
{
 int i,j,k,a[20][20],b[20][20],p[20][20],r1,c1,r2,c2;

 printf("\nEnter the no. of rows in matrix A: ");
 scanf("%d",&r1);
 printf("\nEnter the no. of columns in matrix A: ");
 scanf("%d",&c1);
 printf("\nEnter the no. of rows in matrix B: ");
 scanf("%d",&r2);
 printf("\nEnter the no. of columns in matrix B: ");
 scanf("%d",&c2);
 if(c1 != r2)
 {
  printf("\nMultiplication of Matrix A and B is not possible");
  goto end;
 }
 printf("\nEnter the elements of Matrix 1");
 for(i = 0; i < r1; i++)
 {
  for(j = 0; j < c1; j++)
  {
   printf("\nEnter element a%d%d: ",i+1,j+1);
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nEnter the elements of Matrix 2");
 for(i = 0; i < r2; i++)
 {
  for(j = 0; j < c2; j++)
  {
   printf("\nEnter element b%d%d: ",i+1,j+1);
   scanf("%d",&b[i][j]);
  }
 }
 printf("\nFirst Matrix is\n");
 for(i = 0; i < r1; i++)
 {
  for(j = 0; j < c1; j++)
   printf("%d ",a[i][j]);
  printf("\n");
 }
 printf("\nSecond Matrix is\n");
 for(i = 0; i < r2; i++)
 {
  for(j = 0; j < c2; j++)
   printf("%d ",b[i][j]);
  printf("\n");
 }
 for(i = 0; i < r1; i++)
 {
  for(j = 0; j < c2; j++)
  {
   p[i][j] = 0;
   for(k = 0; k < c2; k++)
   {
    p[i][j] += a[i][k] * b[k][j];
   }
  }
 }
 printf("\nProduct of Matrices is\n");
 for(i = 0; i < r1; i++)
 {
  for(j = 0; j < c2; j++)
   printf("%d ",p[i][j]);
  printf("\n");
 }
 end:
 return 0;
}