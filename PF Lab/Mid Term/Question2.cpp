#include<iostream>
#include<string>
using namespace std;
int main()
{
   int num_part, sum=0;

cout<<"Enter Number of Participants: ";
cin>>num_part;

int scores[num_part];
string name[num_part];
int part_scores[num_part];

for(int i=0;i<num_part;i++)
{
    cout<<"Enter Participant Name: ";
    cin>>name[i];
}
for(int i=0;i<num_part;i++)
{
    cout<<"Enter Scores for "<<name[i];
    for(int j=0;j<3;j++)
    {
        cout<<"\nEnter Scores: ";
        cin>>scores[j];
        sum+=scores[j];
        

    }
part_scores[i]=sum;
sum=0;
}
for(int i=0;i<num_part;i++)
{
cout<<"\n"<<name[i]<<endl;
cout<<part_scores[i];

}



    return 0;
}