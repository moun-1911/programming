#include<stdio.h>
int sumofdigits(int num)
{
if (num == 0)
return 0;
else
return((num %10)+ sumofdigits(num/10));
}
 
int main()
{
int num,result;
printf("Enter an integer number:\n");
scanf("%d",&num);
result = sumofdigits(num);
printf("sum=%d",result);
return 0;
}

