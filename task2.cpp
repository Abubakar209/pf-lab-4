#include<iostream>
using namespace std;
void ifpass(int marks);

main()
{

while(true){

int marks;
  cout<<"Enter your Marks ";
  cin>>marks;
  ifpass(marks);

}

  
 
}

   void ifpass(int marks)
{

   if(marks > 50)
{

   cout<<"Pass"<<endl;
}

   if(marks < 50)
{
   cout<<"fail"<<endl;
}

if(marks == 50)
{
  cout<<"parh lay bhai"<<endl;
}


}







