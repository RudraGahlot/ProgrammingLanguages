#include<iostream>
using namespace std;
int main()
{
    int n, r, sum=0, temp;
    cout<<" Enter the number to check :";
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp == sum)
    cout<<" The number is palindrome ";
    else
    cout<<" The number is not palindrome ";
    return 0; 
}
