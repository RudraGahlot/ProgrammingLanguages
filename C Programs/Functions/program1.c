#include<stdio.h>
int max (int x , int y)
{
    if(x>y) return x;
    else  return y;
   }
    
int main()
{
    int a=20 , b=30;
    int m = max(a,b);
    printf("m is %d", m);
    return 0;
}
