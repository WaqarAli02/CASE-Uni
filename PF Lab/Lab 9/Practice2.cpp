#include<iostream>
using namespace std;
int main()
{
int a, b;
char op;

cout<<"Enter First Value: ";
cin>>a;

cout<<"Enter Second Value: ";
cin>>b;

cout<<"Enter Operator: ";
cin>>op;

switch(op)
{
    case '+':
    cout<<"\nResult is "<<a+b;
    break;

    case '-':
    cout<<"\nResult is "<<a-b;
    break;

    case '*':
    cout<<"\nResult is "<<a*b;
    break;


    case '/':
    cout<<"\nResult is "<<a/b;
    break;

    default:
    cout<<"Wrong Operator";
    break;
}
    
    
    return 0;
}