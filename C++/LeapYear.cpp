#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<< " ENTER THE YEAR TO CHECK ";
    cin>>year;

    if(year % 4 == 0){
        if (year % 100 == 0){
            if(year % 400 == 0)
                cout<< year <<" IS A LEAP YEAR ";
                else
                 cout<<year<<" IS NOT A LEAP YEAR";
                  }
                  else
                  cout<< year << " IS A LEAP YEAR ";
    }
    else
    cout<< year << " IS NOT A LEAP YEAR ";
    return 0;
}
