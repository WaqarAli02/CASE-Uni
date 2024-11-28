#include<iostream>
using namespace std;
int main()
{
char x;
cout<<"Enter Alphabet: ";
cin>>x;

switch(x)
{
   
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   cout<<"\n This is A Vowel ";
   break;

   default:
   cout<<" This is a Consonant ";
   break;

}

    
    
    return 0;
}