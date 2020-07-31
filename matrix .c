#include<stdio.h>
#include<conio.h>

int main()
{
int num[20] [20],i,j,sum=0,sum1=0,n;
printf("Enter Number of Rows and Coloumns in the matrix");
scanf("%d",&n);
printf("Enter elements of Matrix ...\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("Enter elements in pocket [%d] [%d] \t",i,j);
scanf("%d",&num[i] [j]);
}
}
printf("Matrix is .....\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",num[i] [j]);
}
printf("\n");
}
for (i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i==j)
{
sum=sum+num[i] [j];
}
if(i+j==n-1)
{
sum1=sum1+num[i] [j];
}
}
}
printf("Diagonal sum of Matrix Are %d \t and %d",sum,sum1);
getch();
}
