#include<stdio.h>
int main()
{ 
    int array[100];
    int i , num;

    printf(" Enter the no of elements in array\n");    scanf("%d",&num);

    for(i=0; i<num; i++)
    {    printf("The value of  %d  is : ",  (i+1));     scanf("%d", &array[i]);     }

    for(i=0; i<num; i++)
    {    printf("%d ",array[i]);   }
          

    printf("\n Array in reverse order: \n");    

    for (int i = num-1; i >= 0; i--) 
    {    printf("%d ", array[i]);     }  

    return 0;
}
