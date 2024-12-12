#include<iostream>
using namespace std;
int main()
{
int stu, sum, high, low, op, stnum;
cout<<"Enter Number of Students: ";
cin>>stu;


int arr[stu];



for(int i=0; i<stu; i++)
{
cout<<"Enter Marks of Student "<<i+1<<" :";
cin>>arr[i];
sum+=arr[i];
}
low=arr[0];
high= arr[0];


cout<<"1. Display all Student Marks  \n2. Calculate the Class Average  \n3. Find the Highest and Lowest Marks  \n4. Determine the grade of a specific student  ";
cin>>op;


switch(op)
{
    case 1:
    {
        for(int i=0; i<stu; i++)
        {
         cout<<"\n Student "<<i+1<<" : "<<arr[i];
         }
    }
    break;

    case 2:
    {
        cout<<"Average: "<<sum/stu;
    }
    break;
    case 3:
    {
        for(int i=0; i<stu; i++)
        {
         if(high<arr[i])
        {
        high=arr[i];
        }
        }



        for(int i=0; i<stu; i++)
         {
         if(low>arr[i])
         {
          low=arr[i];
        }
         }
         cout<<"Highest: "<<high;
         cout<<"\nLowest: "<<low;

    }
    break;
    case 4:
    {
        cout<<"Enter Student Number: ";
        cin>>stnum;
         cout<<arr[stnum-1];

         if(arr[stnum-1]>=90)
         { 
            cout<<"\nGrade A";
         }
         else if(arr[stnum-1]>=80&&arr[stnum-1]<90)
         {
           cout<<"\nGrade B";
         }

         else if(arr[stnum-1]>=70&&arr[stnum-1]<80)
         {
           cout<<"\nGrade C";
         }
         else if(arr[stnum-1]>=60&&arr[stnum-1]<70)
         {
           cout<<"\nGrade D";
         }
         else if(arr[stnum-1]<60)
         {
           cout<<"\nGrade F";
         }

    }
    break;

    default:
    {
        cout<<"Wrong Choice";
        
    }
    break;
}







   
 
   
   
   
    return 0;



}