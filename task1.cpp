#include<iostream>
using namespace std;
void add(int number1, int number2);
void product(int number1, int number2);
void subtract(int number1, int number2);
void divide(float number1, float number2);



main()
{

while(true)
{

int number1 , number2 ;
    char  op;
    cout<<"Enter number one: ";
    cin>> number1;
    cout<<"Enter number two: ";
    cin>> number2;
   cout<<"enter operator i.e '+','-','*','/'  ";
   cin>> op;

   if(op== '+'){
   add(number1,number2);
    }

   if(op== '*'){
   product(number1,number2);
   cout<<endl;
    }

  if(op== '-'){
   subtract(number1,number2);
   cout<<endl;
    }
   
  
   if(op== '/'){
   divide(number1,number2);
   cout<<endl;
    } 


}
     


   
}

void add(int number1, int number2)
{

   
    int sum;
   
    sum=number1+number2;
    cout<<sum<<endl;
  

}

void product(int number1, int number2)
{

   
    int multiply;
   
    multiply=number1*number2;
    cout<<multiply<<endl;
  

}

void subtract(int number1, int number2)
{

   
    int minus;
   
    minus=number1-number2;
    cout<<minus<<endl;
  

}

void divide(float number1, float number2)
{

   
    float div;
   
    div=number1/number2;
    cout<<div<<endl;
  

}





