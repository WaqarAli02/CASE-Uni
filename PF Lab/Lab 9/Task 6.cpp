#include<iostream>
using namespace std;
int main()
{
char cho;
cout<<"Enter Color Of Traffic Light(R for Red, Y for Yellow, G for Green): ";
cin>>cho;
switch(cho)
{
     case 'R':
     case 'r':
     {
        cout<<"STOP!";
     }
     break;
    
     case 'g':
     case 'G':
     {
        cout<<"GO!";
     }
     break;

     case 'y':
     case 'Y':
     {
        cout<<"Slow Down";
     }
     break;

     default:
     cout<<"Enter Wrong Choice";
}  
    
    
    return 0;
}