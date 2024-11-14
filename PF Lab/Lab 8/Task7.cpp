#include<iostream>
using namespace std;
int main()
{

char charc ='A';


    for(int r=1; r<=5; r++)
    {
        for(int c=1; c<=r; c++)
        {
          cout<<charc;
          charc++;
        }
        cout<<endl;
    
    charc = 'A';
    }
    
    
    
    return 0;
}
