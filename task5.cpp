#include<iostream>
using namespace std;
void calculatebill(string day, int amount);

main()
{   while(true){

    string day;
    int amount;
    cout<<"Enter Day ";
    cin>> day;
    cout<<"Enter amount ";
    cin>> amount;
     
    calculatebill(day,amount);


}
    
}



  void calculatebill(string day, int amount)
{


   if(day=="sunday")
{
    float result;

    result=amount*0.1;

   float amountpaid=amount-result;

   cout<<"Your bill is "<<amountpaid<<endl;

}

  if(day != "sunday")
{
float result;
    result=amount*0.05;
   float amountpaid=amount-result;
   cout<<"Your bill is "<<amountpaid<<endl;


}
 










}