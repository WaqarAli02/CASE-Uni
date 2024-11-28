#include<iostream>
using namespace std;
int main()
{
int mon;
cout<<"Enter Number of Month(1 to 12): ";
cin>>mon;
switch(mon)
{
    case 1:
    case 12:
    case 2:
    cout<<"Winter";
    break;

    case 3:
    case 4:
    case 5:
    cout<<"Spring";
    break;

    case 6:
    case 7:
    case 8:
    cout<<"Summer";
    break;

    case 9:
    case 10:
    case 11:
    cout<<"Autumn";
    break;

    default:
    cout<<"Wrong Number of Month";
    break;
}    
    
    return 0;
}