#include<iostream>
using namespace std;

void add(int,int);
void product(int,int);

void add()
{

    int number1 , number2 ;
    int sum;
    cout<<"Enter number one ";
    cin>> number1;
    cout<<"Enter number two ";
    cin>> number2;
    sum=number1+number2;
    cout<< sum <<endl<<endl;

}


void product()
{
    int number1,number2;
    int multiply;
    cout<<"Enter number one ";
    cin>> number1;
    cout<<"Enter number two ";
    cin>> number2;
    multiply=number1*number2;
    cout<< multiply <<endl<<endl;

}


main()
{

     add();
     cout<<endl;
     product();
     cout<<endl;
     add();
}