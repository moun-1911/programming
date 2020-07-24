#include<stdio.h>
main()
{
printf("pick an item : \n1. Burger\n2. Pasta\n3. French Fries\n4. Sandwich\n5. Pizza");
int choice=0;
scanf("%d",&choice);

switch(choice)
{
case 1:
     printf("Food Item - Pizza \nPrice - Rs 239");
     break;
case 2:
     printf("Food Item - Burger \nPrice - Rs 129");
     break;                                       
case 3:
     printf("Food Item - Pasta \nPrice - Rs 179");
     break;
case 4:
     printf("Food Item - French Fries \nprice - Rs 99");
     break;
case 5:
     printf("Food Item - Sandwich \nprice - Rs 149");
     break;
default: printf("Invalid Choice");
}
}
     
