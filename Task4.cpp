#include<iostream>
using namespace std;
int main()
{
int dig;
cout<<"How Many Digits are There: ";
cin>>dig;

int a[dig], i=1, j=dig;

while(i<=dig)
{
    cout<<"Enter Number "<<i<<" : ";
    cin>>a[i-1];
    i++;
}
cout<<"The Reverse Order Will Be: ";
while(j>0)
{
cout<<a[j-1]<<endl;
j--;
}

    return 0;
}