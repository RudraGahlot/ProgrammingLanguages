#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[1000] , i,n,min,max;

    printf(" Enter the size of array : "); scanf("%d" , &n);
    printf(" Enter the element of array : ");
    for(i=0; i<n; i++)
    { scanf("%d", &a[i]);}

    min=max=a[0];
    for(i=0; i<n; i++)
    {
      if (min>a[i]) min=a[i];
      if (max<a[i]) max = a[i];
    }
       printf(" The min in the array is : %d", min);
       printf(" The max in the array is : %d", max);

    return 0;
}
