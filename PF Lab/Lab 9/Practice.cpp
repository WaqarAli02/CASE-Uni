#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"Enter Character from A to C: ";
cin>>x;

switch(x)
{
    case 'A':
    cout<<"You Entered A";
    break;

    case'B':
    cout<<"You Entered B";
    break;

    case 'C':
    cout<<"You Entered C";
    break;

    default:
    cout<<"You Entered Wrong Character";
    break;
}
    
    
    return 0;
}