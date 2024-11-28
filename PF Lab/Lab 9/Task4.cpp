#include<iostream>
using namespace std;
int main()
{
char gra;
cout<<"Enter Your Grade: ";
cin>>gra; 

switch(gra)
{
    case 'A':
    case 'a':
    cout<<"Excellent";
    break;

    case 'B':
    case 'b':
    cout<<"Good";
    break;

    case 'C':
    case 'c':
    cout<<"Average";
    break;


    case 'D':
    case 'd':
    cout<<"Poor";
    break;
    
    case 'F':
    case 'f':
    cout<<"You have Failed";
    break;

    default:
    cout<<"Wrong Grade";
    break;
}
    return 0;
}