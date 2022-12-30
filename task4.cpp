#include<iostream>
using namespace std;
void isEven(int number);

main()
{
    while(true)
{

   int number;
   cout<<"Enter number";
   cin>> number;
    isEven(number);
}

   



}



void isEven(int number){


  if(number%2 ==0)
{
  cout<<"Enterned Number is event"<<endl;

}

  if(number%2 !=0)
{
  cout<<"Enterned Number is odd"<<endl;

}



}