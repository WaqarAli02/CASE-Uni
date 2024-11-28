#include<iostream>
using namespace std;
int main()
{
int bal=5000, dep, cho;


cout<<"1. Deposit"<<endl<<"2. Withdraw"<<endl<<"3.Check Balence"<<endl<<"4. Exit"<<endl;
cin>>cho;

switch(cho)
{
case 1:
    {
     cout<<"\nEnter Amount to Deposit: ";
     cin>>dep;
     bal+=dep;
    }
break;
case 2:
    {
    cout<<"\nEnter Amount to Withdraw: ";
    cin>>dep;
    if(dep<bal)
    {
    bal-=dep;
    }
    else 
     cout<<"Insufficent Balence";
    }
break;
case 3:
    {
    cout<<"\nYour Balence is: "<<bal;
    }
break;
case 4:
break;

default:
cout<<"\nYou Entered Wrong Choice";
    
    
} 
cout<<"\nTotal Balence After Transaction: "<<bal;
    return 0;
}
