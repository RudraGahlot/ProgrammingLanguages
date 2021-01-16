#include<iostream>
using namespace std;
int main()
{
    char c; int isLower, isUpper;
    cout<< "Enter the charcter to check ";
    cin>> c;

    isUpper =( c == 'A' || c=='E' || c=='I' || c== 'O' || c=='U');
    isLower =( c == 'a' || c=='e' || c=='i' || c== 'o' || c=='u');

    if(isLower || isUpper)
    cout<< c <<" IS VOVEL ";
    else cout<< c <<" IS NOT VOVEL";
    return 0;
}
