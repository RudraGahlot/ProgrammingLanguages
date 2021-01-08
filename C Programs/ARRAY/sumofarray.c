#include<stdio.h>
int main()
{
   int num[10] , sum=0;
   printf("enter ten numbers for their sum :");

   for (int i=0; i<10; i++)
   scanf("%d", &num[i]);

   for (int i=0; i<10; i++)
   {
       sum = sum + num[i];
   }
   
   printf(" \n the sum of ten numbers is : %d " , sum);
   return 0;
}
