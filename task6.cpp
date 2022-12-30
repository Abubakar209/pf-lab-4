  #include<iostream>
  using namespace std;

   void result(int,int);
  main(){
   
while(true){
             int number1;
             int number2;
             cout<<"ENter number one ";
             cin>>number1;
             cout<<"ENter number two ";
              cin>>number2;
      
               result(number1,number2);
}

    
}


   void result(int number1,int number2){
 
   

   if(number1>number2){

     cout<<number1<<" is greater "<<endl;
         

}

   if(number1<number2){

     cout<<number2<<" is greater "<<endl;


}



}




