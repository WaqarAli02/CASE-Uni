#include<iostream>
using namespace std;
int main()
{
int i=1, b, sum=0;
cout<<"Enter Positive Integer: ";
cin>>b;

if(b>0)
{
while(i<=b)
{
    sum+=i;
    i++;
}


cout<<sum;
}
else
{
    cout<<"Please Input Positive Integer: ";
}
    return 0;


}