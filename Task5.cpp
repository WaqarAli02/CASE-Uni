#include<iostream>
using namespace std;
int main()
{
   int a[5],i=1,j=5;

while(i<=5)
{
    cout<<"Enter Number "<<i<<" : ";
    cin>>a[i-1];
    i++;
}
cout<<"The Reverse Order Will Be: "<<endl;
while(j>=0)
{
cout<<a[j]<<endl;
j--;
}

    
    
    return 0;
}