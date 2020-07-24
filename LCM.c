#include<stdio.h>
int main()
{
int n1,n2;
printf("Input First number:\n");
scanf("%d",&n1);
printf("Input Second number:\n");
scanf("%d",&n2);
printf("LCM of %d and %d = %d",n1,n2,lcm(n1,n2));
}
int lcm(int a,int b)
{
 static int m=0;
 m=m+b;
 if(m%a==0 && m%b==0)
 return m;
 return lcm(a,b);
 }
