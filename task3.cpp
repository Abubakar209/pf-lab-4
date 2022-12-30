#include<iostream>
using namespace std;
void isEligbile(int age);

main()
{
while(true)
{
    int age;
    cout<<"Enter your age: ";
    cin>> age;
    isEligbile(age);
}



}



void isEligbile(int age){

   if(age > 18)
{
    cout<<"ELIGIBLE FOR VOTE"<<endl;
}

   if(age == 18)
{
    cout<<"ELIGIBLE FOR VOTE"<<endl;
}

   if(age < 18)
{
    cout<<" NOT ELIGIBLE FOR VOTE"<<endl;
}


}