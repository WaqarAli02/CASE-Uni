#include<iostream>
using namespace std;
int main()
{
int age, num_book;
char mem;
bool ovr_bok;

cout<<"Enter Your Age: ";
cin>>age;

cout<<"\n Enter Number of Books Already Borrowed: ";
cin>>num_book;

cout<<"\n Enter Membership Status: ";
cin>>mem;

ovr_bok = 0;
cout<<"Do you have Overdue Book: (1 for Yes and 0 for No)";
cin>>ovr_bok;

if((age>12&&num_book<5)&&(ovr_bok==0 && mem=='R'))
{
    cout<<"You are Eligible for Borrowing a Book";
    num_book++;
}
else if((age>12&&num_book<10)&&(ovr_bok ==0 && mem=='P'))
{
cout<<"You are Eligible for Borrowing a Book";
num_book++;
}
if(age<=12)
{
    cout<<"You Are Too Young";
}
if(mem== 'R')
{
    if(num_book>5)
    {
        cout<<"You Already Borrowed 5 Books";
    }
}
if(mem == 'P')
{
    if(num_book>10)
    {
        cout<<"You Already Borrowed 5 Books";
    }
}

if (ovr_bok==0)
{
    cout<<"Over due Books";
}


  
  return 0;
}

